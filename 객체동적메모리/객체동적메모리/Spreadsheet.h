#pragma once

#include "SpreadsheetCell.h"
#include <memory>

class Spreadsheet
{
public:
	Spreadsheet(size_t width, size_t height);
	Spreadsheet(const Spreadsheet& src); // copy constructor
	~Spreadsheet();
	Spreadsheet(Spreadsheet&& src) noexcept; // 이동 생성자

	Spreadsheet& operator=(const Spreadsheet& rhs);
	Spreadsheet& operator=(Spreadsheet&& rhs) noexcept;  // 이동 대입 연산자

	void setCellAt(size_t x, size_t y, const SpreadsheetCell& cell);
	SpreadsheetCell& getCellAt(size_t x, size_t y);

	friend void swap(Spreadsheet& first, Spreadsheet& second) noexcept;

private:
	void verifyCoordinate(size_t x, size_t y) const;
	void cleanup() noexcept;
	void moveFrom(Spreadsheet& src) noexcept;

private:
	size_t mWidth = 0;
	size_t mHeight = 0;
	SpreadsheetCell** mCells = nullptr;
};
