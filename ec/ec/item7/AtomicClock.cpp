#include "AtomicClock.h"

AtomicClock::AtomicClock()
	: TimeKeeper(),
	nMode(0)
{
	std::cout << "AtomicClock constructor\n" << std::endl;
}

AtomicClock::AtomicClock(const AtomicClock& rhs)
	: TimeKeeper(rhs),
	nMode(rhs.nMode)
{
	std::cout << "AtomicClock copy constructor\n" << std::endl;
}

AtomicClock&
AtomicClock::operator=(const AtomicClock& rhs)
{
	TimeKeeper::operator=(rhs);
	nMode = rhs.nMode;

	std::cout << "AtomicClock copy assign operator\n" << std::endl;

	return *this;
}

AtomicClock::~AtomicClock()
{
	std::cout << "AtomicClock destructor\n" << std::endl;
}

TimeKeeper* AtomicClock::getTimeKeeper()
{
	return new AtomicClock;
}

void AtomicClock::SetMode(int par_mode)
{
	nMode = par_mode;
}

int AtomicClock::GetMode()
{
	return nMode;
}