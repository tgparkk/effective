#include "WebBrowser.h"

WebBrowserStuff::WebBrowser::WebBrowser()
	:nMode(1)
{
	std::cout << "WebBrowser constructor\n";
}

WebBrowserStuff::WebBrowser::WebBrowser(const WebBrowser& rhs)
	:nMode(rhs.nMode)
{
	std::cout << "WebBrowser copy constructor\n";
}

WebBrowserStuff::WebBrowser& WebBrowserStuff::WebBrowser::operator=(const WebBrowser& rhs)
{
	nMode = rhs.nMode;

	std::cout << "WebBrowser copy assignment operaotr\n";

	return *this;
}

WebBrowserStuff::WebBrowser::~WebBrowser()
{
	std::cout << "WebBrowser destructor\n";
}

void WebBrowserStuff::clearWebBrowser(WebBrowser& wb)
{
	//std::cout << "WebBrowser clearWebBrowser\n";
	WebBrowserStuff::clearHistory();
	WebBrowserStuff::removeCookies();
}

void WebBrowserStuff::clearHistory()
{
	std::cout << "WebBrowser clearHistory\n";
}

void WebBrowserStuff::removeCookies()
{
	std::cout << "WebBrowser removeCookies\n";
}