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
		// Move constructor <- vec ũ�� ��ȭ�� i==0 �϶� ���� Spreadsheet �̵� 
		// Move constructor <- i == 1 ��� ���� Spreadsheet �̵�
		vec.push_back(Spreadsheet(100, 100));
		std::cout << std::endl;
	}

	// Normal constructor
	Spreadsheet s(2, 3);

	// createObject() <- Normal constructor
	// Move assignment operator <- createObject() �� ������ �ӽ� ��ü��
	// ������� ������ �����Ϸ��� �Ϲ� ���� ���� �����ڰ� �ƴ�
	// �̵� ���� �����ڸ� ���
	s = createObject();

	// Normal constructor
	Spreadsheet s2(5, 6);

	// Copy assignment operator ���Ŀ�
	// ���� ���� ������ �ȿ���
	// Spreadsheet(const Spreadsheet& src) ȣ�� (���� ���� ������)
	// ���� ���� ������ �ȿ���
	// ������ �ʱ�ȭ ����Ʈ���� 
	// Normal constructor ����
	// Copy constructor
	s2 = s;

	return 0;
}