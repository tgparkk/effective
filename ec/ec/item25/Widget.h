#pragma once
#include "../pch.h"

class WidgetImpl {			// class for Widget data;
public:						// details are unimportant
	WidgetImpl();
	
private:
	int a, b, c;			// possibly lots of data —
	std::vector<double> v;	// expensive to copy!
	
};

class Widget { // class using the pimpl idiom
public:
	Widget(const Widget& rhs);
	Widget& operator=(const Widget& rhs)	// to copy a Widget, copy its
	{										// WidgetImpl object. For ... // details on implementing
		*pImpl = *(rhs.pImpl);				// operator= in general, ... 
											// see Items 10, 11, and 12. 
	}

	void swap(Widget& other)
	{
		using std::swap;

		swap(pImpl, other.pImpl);
	}

private:
	WidgetImpl* pImpl; // ptr to object with this 
};

/**/
namespace std {
	template<>
	void swap<Widget>(Widget& a, Widget& b)
	{
		a.swap(b);
	}
}
