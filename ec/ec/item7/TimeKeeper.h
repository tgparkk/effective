#pragma once

#include "../pch.h"

class TimeKeeper
{
public:
	TimeKeeper();

	TimeKeeper(const TimeKeeper& rhs);
	TimeKeeper& operator=(const TimeKeeper& rhs);

	virtual ~TimeKeeper();

public:
	virtual TimeKeeper* getTimeKeeper() = 0;

	void		SetType(int par_type);
	int			GetType();

private:
	int nType;
};