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

// �̵� ������
Spreadsheet::Spreadsheet(Spreadsheet&& src) noexcept
{
	std::cout << "Move constructor" << std::endl;

	swap(*this, src);
}

// �̵� ���� ������
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

	// �ڽ��� �����ϴ��� Ȯ���Ѵ�.
	if (this == &rhs) {
		return *this;
	}

	// ���� �� �¹ٲٱ�(copy-and-swap) ���� ����
	Spreadsheet temp(rhs); // ��� �۾��� �ӽ� �ν��Ͻ����� ó���Ѵ�.
	swap(*this, temp); // ���ܸ� �߻����� �ʴ� �������θ� ó���Ѵ�.
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
	// ���� ���� ����
	mWidth = src.mWidth;
	mHeight = src.mHeight;
	mCells = src.mCells;

	// ���� ��ü�� �����Ѵ�. �������� �̵��߱� �����̴�.
	src.mWidth = 0;
	src.mHeight = 0;
	src.mCells = nullptr;
}