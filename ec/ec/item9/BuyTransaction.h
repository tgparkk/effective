#pragma once

#include "Transaction.h"
#include "../pch.h"

class BuyTransaction : public Transaction
{
public:
	BuyTransaction();

public:
	virtual void logTransction() const;
};

