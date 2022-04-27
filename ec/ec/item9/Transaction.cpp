#include "Transaction.h"

Transaction::Transaction(const std::string& logInfo)
{
	std::cout << "Transaction constructor\n" << std::endl;

	logTransaction(logInfo);
}


void Transaction::logTransaction(const std::string& loginfo) const
{
	std::cout << "logTransaction : " ;
	std::cout << loginfo << std::endl;
}

