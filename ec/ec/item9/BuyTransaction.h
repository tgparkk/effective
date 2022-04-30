#pragma once

#include "Transaction.h"
#include "../pch.h"

class BuyTransaction : public Transaction
{
public:
	BuyTransaction();
	~BuyTransaction();

private:
	static std::string createLogString(std::string param)
	{
		return param;
	}
};

