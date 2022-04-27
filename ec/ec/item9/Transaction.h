#pragma once

#include "../pch.h"

class Transaction
{
public:
	Transaction();

public:
	virtual void logTransaction() const = 0;

};

