#pragma once

#include "pch.h"

//#include "item7/TimeKeeper.h"
//#include "item7/AtomicClock.h"

//#include "item9/Transaction.h"
//#include "item9/BuyTransaction.h"

//#include "item13/Investment.h"
//#include "item13/Stock.h"

//#include "item15/Investment.h"
//#include "item15/Stock.h"

//#include "item18/Investment.h"
//#include "item18/Stock.h"

//#include "item23/WebBrowserBookMarks.h"

//#include "item20/Window.h"
//#include "item20/WindowWithScrollBars.h"

#include "item25/Widget.h"


int main()
{
	// item 25
	Widget a();
	//Widget b();

	//a.swap(b);

	// item 20
	//WindowWithScrollBars wwsb;
	//wwsb.printNameAndDisplay(wwsb);

	// item 7
	//AtomicClock ac1;

	//ac1.SetMode(9);

	//AtomicClock ac2;

	//std::cout << "ac2ÀÇ nMode " << ac2.GetMode() << std::endl;

	//ac2 = ac1;

	//std::cout << "ac2ÀÇ nMode " << ac2.GetMode() << std::endl;


	// item 23
	//WebBrowserStuff::removeCookies();


	//item 18
	//Stock s;
	//auto auto_sptrI = s.createInvestment();
	//int day = s.daysHeld(auto_sptrI.get());
	//std::cout << day << std::endl;


	// item 15
	//Stock s;
	////std::shared_ptr<Investment>pi1(s.m_shared_ptr_Investment);
	////
	////bool taxable1 = pi1->isTaxFree();

	////std::cout << taxable1 << std::endl;
	//s.f();
	//
	//int day = s.f2();
	//std::cout << day << std::endl;


	// item 13
	//Stock s;
	//s.f();
	//std::cout << "main ³¡\n" << std::endl;

	// item 9
	//std::cout << "Hello World\n" << std::endl;
	//BuyTransaction b;

	// item7
	/*AtomicClock ac;
	std::cout << "Hello World\n" << std::endl;
	TimeKeeper* ptk = ac.getTimeKeeper();


	delete ptk;*/
    
	
}


