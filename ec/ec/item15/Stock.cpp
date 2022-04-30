#include "Stock.h"

Stock::Stock()
	: Investment()
{
	std::cout << "Stock constructor\n" << std::endl;
}

Stock::~Stock()
{
	std::cout << "Stock destructor\n" << std::endl;
}

Investment* Stock::createInvestment()
{
	std::cout << "Stock createInvestment �Լ�\n" << std::endl;
	return new Stock;
}

void Stock::f()
{
	//Investment* pInv = createInvestment();
	std::shared_ptr<Investment> pInv(createInvestment());

	int days = daysHeld(pInv.get());

	std::cout << "daysHeld �� ��:" << days <<  std::endl;

	//delete pInv;
}

int Stock::daysHeld(const Investment* pi)
{
	return pi->m_day;
}