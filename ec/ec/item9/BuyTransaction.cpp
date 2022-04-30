#include "BuyTransaction.h"

BuyTransaction::BuyTransaction()
	: Transaction(createLogString("Buy"))
{
	std::cout << "BuyTransaction constructor\n" << std::endl;

}

BuyTransaction::~BuyTransaction()
{
	std::cout << "BuyTransaction destructor\n" << std::endl;
}
