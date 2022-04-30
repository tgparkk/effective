#include "Transaction.h"

Transaction::Transaction(const std::string& logInfo)
{
	std::cout << "Transaction constructor\n" << std::endl;

	logTransaction(logInfo);
}

Transaction::~Transaction()
{
	std::cout << "Transaction destructor\n" << std::endl;
}


void Transaction::logTransaction(const std::string& loginfo) const
{
	std::cout << "logTransaction : " ;
	std::cout << loginfo << std::endl;
}

