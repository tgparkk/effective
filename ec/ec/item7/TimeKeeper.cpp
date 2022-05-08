#include "TimeKeeper.h"

TimeKeeper::TimeKeeper()
	:nType(0)
{
	std::cout << "TimeKeeper constructor\n" << std::endl;
}

TimeKeeper::TimeKeeper(const TimeKeeper& rhs)
	:nType(rhs.nType)
{
	std::cout << "TimeKeeper copy constructor\n" << std::endl;
}

TimeKeeper&
::TimeKeeper::operator=(const TimeKeeper& rhs)
{
	nType = rhs.nType;

	std::cout << "TimeKeeper copy assign operator\n" << std::endl;

	return *this;
}

TimeKeeper::~TimeKeeper()
{
	std::cout << "TimeKeeper destructor\n" << std::endl;
}

void TimeKeeper::SetType(int par_type)
{
	nType = par_type;
}

int TimeKeeper::GetType()
{
	return nType;
}