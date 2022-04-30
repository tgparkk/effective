#pragma once

#include "../pch.h"
#include "Investment.h"

static int ctorS = 1;

class Stock :
	public Investment
{
public:
	Stock();
	~Stock();

public:
	//Investment* createInvestment();
	std::shared_ptr<Investment> createInvestment();



	int daysHeld(const Investment* pi);



};