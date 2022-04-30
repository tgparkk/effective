#include "Stock.h"

Stock::Stock()
	: Investment()
	, m_Investment(static_cast<Investment*>(0))
{
	std::cout << ctorS <<" Stock constructor\n" << std::endl;
	ctorS++;
}

Stock::~Stock()
{
	std::cout << "Stock destructor\n" << std::endl;
}

Investment* Stock::createInvestment()
{
	return new Stock;
}

void Stock::f()
{
	//Investment* pInv = createInvestment();

	//std::shared_ptr<Investment> pInv(createInvestment());
	m_Investment = std::shared_ptr<Investment> (createInvestment());
	/*
	int days = daysHeld(pInv.get());

	std::cout << "daysHeld 의 값:" << days <<  std::endl;

	bool isTax1 = pInv->isTaxFree();
	bool isTax2 = (*pInv).isTaxFree();

	std::cout << "isTax1 의 값:" << isTax1 << std::endl;
	std::cout << "isTax2 의 값:" << isTax2 << std::endl;
	*/
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
