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
	std::cout << "Stock createInvestment 함수\n" << std::endl;
	return new Stock;
}

void Stock::f()
{
	//Investment* pInv = createInvestment();
	std::auto_ptr<Investment> pInv(createInvestment());

	std::cout << "Stock f 함수\n" << std::endl;

	//delete pInv;
}