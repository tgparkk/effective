#pragma once

#include "../pch.h"

class Window
{
public:
	Window();
	virtual ~Window();

public:
	std::string name() const;
	virtual void display() const;


};