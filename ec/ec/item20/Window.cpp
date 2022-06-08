#include "Window.h"

Window::Window()
{
	std::cout << "Window ctor" << std::endl;
}

Window::~Window()
{
	std::cout << "Window dtor" << std::endl;
}

std::string Window::name() const
{
	return "Window name()\n";
}

void Window::display() const
{
	std::cout << "Window display()" << std::endl;
}

