#pragma once

#include "../pch.h"
#include "WebBrowserBookMarks.h"
#include "WebBrowserCookies.h"

namespace WebBrowserStuff
{
	class WebBrowser
	{
	public:
		WebBrowser();
		WebBrowser(const WebBrowser& rhs);
		WebBrowser& operator=(const WebBrowser& rhs);

		~WebBrowser();


	private:
		int nMode;
	};

	void clearWebBrowser(WebBrowser& wb);
}

