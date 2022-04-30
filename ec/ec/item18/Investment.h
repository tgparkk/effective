#pragma once

#include "../pch.h"

static int ctorI = 1;

class Investment
{
public:
	Investment();
	virtual ~Investment();

public:
	//virtual Investment* createInvestment() = 0;
	virtual std::shared_ptr<Investment> createInvestment() = 0;

	bool isTaxFree() const;

public:
	int		m_day;
	bool	m_tax;
};