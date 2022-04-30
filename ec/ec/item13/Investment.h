#pragma once

#include "../pch.h"

class Investment
{
public:
	Investment();
	virtual ~Investment();

public:
	virtual Investment* createInvestment() = 0;
};