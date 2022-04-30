#include "Stock.h"

Stock::Stock()
{
	std::cout << ctorS << " Stock constructor\n" << std::endl;
	ctorS++;
}

Stock::~Stock()
{
	std::cout << "Stock destructor\n" << std::endl;
}

std::shared_ptr<Investment> Stock::createInvestment()
{
	return std::shared_ptr<Investment>(new Stock);
}


int Stock::daysHeld(const Investment* pi)
{
	return pi->m_day;
}
