#include "BuyTransaction.h"

BuyTransaction::BuyTransaction()
{
	std::cout << "BuyTransaction constructor\n" << std::endl;

	logTransaction();
}



void BuyTransaction::logTransaction()
{
	std::cout << "BuyTransaction logging\n" << std::endl;
}

