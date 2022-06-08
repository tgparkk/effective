#pragma once

#include "../pch.h"
#include "Window.h"

class WindowWithScrollBars : public Window
{
public:
	WindowWithScrollBars();
	virtual ~WindowWithScrollBars();

public:
	virtual void display() const;


	void printNameAndDisplay(Window& w);

};