#include "WindowWithScrollBars.h"

WindowWithScrollBars::WindowWithScrollBars()
{
	std::cout << "WindowWithScrollBars ctor" << std::endl;
}

WindowWithScrollBars::~WindowWithScrollBars()
{
	std::cout << "WindowWithScrollBars dtor" << std::endl;
}

void WindowWithScrollBars::display() const
{
	std::cout << "WindowWithScrollBars display()" << std::endl;
}

/*
void WindowWithScrollBars::printNameAndDisplay(Window w)
{
	std::cout << w.name();
	w.display();
}
*/