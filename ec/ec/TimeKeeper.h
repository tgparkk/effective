#pragma once

#include "pch.h"

class TimeKeeper
{
public:
	TimeKeeper();
	virtual ~TimeKeeper();

public:
	virtual TimeKeeper* getTimeKeeper() = 0;
};