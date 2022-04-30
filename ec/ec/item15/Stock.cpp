#include "Stock.h"

Stock::Stock()
	: Investment()
	, m_Investment()

{

	std::cout << "Stock constructor\n" << std::endl;
}

Stock::~Stock()
{
	std::cout << "Stock destructor\n" << std::endl;
}

Investment* Stock::createInvestment()
{
	//std::cout << "Stock createInvestment 함수\n" << std::endl;
	return new Stock;
}

void Stock::f()
{
	//Investment* pInv = createInvestment();
	
	std::shared_ptr<Investment> pInv(createInvestment());

	m_Investment = pInv;

	int days = daysHeld(pInv.get());

	std::cout << "daysHeld 의 값:" << days <<  std::endl;

	bool isTax1 = pInv->isTaxFree();
	bool isTax2 = (*pInv).isTaxFree();

	std::cout << "isTax1 의 값:" << isTax1 << std::endl;
	std::cout << "isTax2 의 값:" << isTax2 << std::endl;

	//delete pInv;
}

int Stock::f2()
{
	return m_Investment.get()->m_day;
}

int Stock::daysHeld(const Investment* pi)
{
	return pi->m_day;
}
