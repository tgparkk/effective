#include <iostream>

class Transaction {
public:
	Transaction() {
		init();
	}
	virtual void logTransaction() const = 0;
private:
	void init() {
		// Do something ...
		logTransaction();
	}
};

class BuyTransaction : public Transaction {
public:
	virtual void logTransaction() const {
		std::cout << "logging for transaction of buy\n";
	}
};
class SeelTransaction : public Transaction {
public:
	virtual void logTransaction() const {
		std::cout << "logging for transaction of sell\n";
	}
};

int main(void) {
	BuyTransaction b;
	//return 0;
}
