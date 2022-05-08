#pragma once

#include "../pch.h"
#include "TimeKeeper.h"
class AtomicClock :
	public TimeKeeper
{
public:
	AtomicClock();
	
	AtomicClock(const AtomicClock& rhs);
	AtomicClock& operator=(const AtomicClock& rhs);

	~AtomicClock();

public:
	TimeKeeper* getTimeKeeper();

	void		SetMode(int par_mode);
	int			GetMode();


private:
	int nMode;

};