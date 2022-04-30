#pragma once

#include "../pch.h"
#include "Investment.h"

class Stock : 
	public Investment
{
public:
	Stock();
	~Stock();

public:
	Investment* createInvestment();
	void f();
};