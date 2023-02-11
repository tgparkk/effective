#include <iostream>
#include <vector>
#include "Spreadsheet.h"

Spreadsheet createObject()
{
	return Spreadsheet(3, 2);
}

int main()
{
	std::vector<Spreadsheet> vec;
	for (int i = 0; i < 2; ++i) {
		std::cout << "Iteration " << i << std::endl;
		// i == 0
		// Normal constructor
		// Move constructor

		// i == 1
		// Normal constructor
		// Move constructor <- vec 크기 변화로 i==0 일때 만든 Spreadsheet 이동 
		// Move constructor <- i == 1 방금 만듬 Spreadsheet 이동
		vec.push_back(Spreadsheet(100, 100));
		std::cout << std::endl;
	}

	// Normal constructor
	Spreadsheet s(2, 3);

	// createObject() <- Normal constructor
	// Move assignment operator <- createObject() 로 생성한 임시 객체가
	// 사라지기 때문에 컴파일러는 일반 복사 대입 연산자가 아닌
	// 이동 대입 연산자를 사용
	s = createObject();

	// Normal constructor
	Spreadsheet s2(5, 6);

	// Copy assignment operator 이후에
	// 복사 대입 연산자 안에서
	// Spreadsheet(const Spreadsheet& src) 호출 (복사 대입 연산자)
	// 복사 대입 연산자 안에서
	// 생성자 초기화 리스트에서 
	// Normal constructor 이후
	// Copy constructor
	s2 = s;

	return 0;
}