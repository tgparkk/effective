#include "Spreadsheet.h"
#include <utility>
#include <stdexcept>
#include <iostream>

Spreadsheet::Spreadsheet(size_t width, size_t height)
	:mWidth(width), mHeight(height)
{
	std::cout << "Normal constructor" << std::endl;

	mCells = new SpreadsheetCell*[mWidth];
	for (size_t i = 0; i < mWidth; i++)
	{
		mCells[i] = new SpreadsheetCell[mHeight];
	}
}

Spreadsheet::Spreadsheet(const Spreadsheet& src)
	: Spreadsheet(src.mWidth, src.mHeight)
{
	std::cout << "Copy constructor" << std::endl;

	for (size_t i = 0; i < mWidth; i++) {
		for (size_t j = 0; j < mHeight; j++) {
			mCells[i][j] = src.mCells[i][j];
		}
	}
}

Spreadsheet::~Spreadsheet()
{
	for (size_t i = 0; i < mWidth; i++) {
		delete[] mCells[i];
	}
	delete[] mCells;
	mCells = nullptr;
}

// 이동 생성자
Spreadsheet::Spreadsheet(Spreadsheet&& src) noexcept
{
	std::cout << "Move constructor" << std::endl;

	swap(*this, src);
}

// 이동 대입 연산자
Spreadsheet& Spreadsheet::operator=(Spreadsheet&& rhs) noexcept
{
	std::cout << "Move assignment operator" << std::endl;

	Spreadsheet temp(std::move(rhs));
	swap(*this, temp);
	return *this;
}


void Spreadsheet::verifyCoordinate(size_t x, size_t y) const
{
	if (x >= mWidth || y >= mHeight) {
		throw std::out_of_range("");
	}
}

void Spreadsheet::setCellAt(size_t x, size_t y, const SpreadsheetCell& cell)
{
	verifyCoordinate(x, y);
	mCells[x][y] = cell;
}

SpreadsheetCell& Spreadsheet::getCellAt(size_t x, size_t y)
{
	verifyCoordinate(x, y);
	return mCells[x][y];
}

void swap(Spreadsheet& first, Spreadsheet& second) noexcept
{
	using std::swap;

	swap(first.mWidth, second.mWidth);
	swap(first.mHeight, second.mHeight);
	swap(first.mCells, second.mCells);
}

Spreadsheet& Spreadsheet::operator=(const Spreadsheet& rhs)
{
	std::cout << "Copy assignment operator" << std::endl;

	// 자신을 대입하는지 확인한다.
	if (this == &rhs) {
		return *this;
	}

	// 복제 후 맞바꾸기(copy-and-swap) 패턴 적용
	Spreadsheet temp(rhs); // 모든 작업을 임시 인스턴스에서 처리한다.
	swap(*this, temp); // 예외를 발생하지 않는 연산으로만 처리한다.
	return *this;
}

void Spreadsheet::cleanup() noexcept
{
	for (size_t i = 0; i < mWidth; i++) {
		delete[] mCells[i];
	}
	delete[] mCells;
	mCells = nullptr;
	mWidth = mHeight = 0;
}

void Spreadsheet::moveFrom(Spreadsheet& src) noexcept
{
	// 얕은 복제 적용
	mWidth = src.mWidth;
	mHeight = src.mHeight;
	mCells = src.mCells;

	// 원본 객체를 리셋한다. 소유권이 이동했기 때문이다.
	src.mWidth = 0;
	src.mHeight = 0;
	src.mCells = nullptr;
}