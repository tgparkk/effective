#pragma once

#include "../pch.h"

class Transaction
{
public:
	explicit Transaction(const std::string& logInfo);

	void logTransaction(const std::string& logInfo) const;


};

