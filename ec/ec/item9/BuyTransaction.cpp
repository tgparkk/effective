#include "BuyTransaction.h"

BuyTransaction::BuyTransaction()
	: Transaction(createLogString("Buy"))
{
	std::cout << "BuyTransaction constructor\n" << std::endl;

	
}
