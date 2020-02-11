#pragma once
#pragma once
#include "Currency.h"

class Rupee : public Currency
{
public:
	//Pre: Wallet constrcutor is called or a new object needs to be created in main
	Rupee() {
		wName = "Rupee";
		fName = "paise";
	}
	//Post: Rupee object is created 

	//Pre: +operator is called
	Rupee(int x, int y);
	//Post: Rupee object is created 

	//Pre: add function is called in main
	Currency operator+(Currency const&);
	//Post: 2 objects are added together

	//Pre: subtract function is called in main
	Currency operator-(Currency const&);
	//Post: second object is subtracted from the first

	//Pre: called anywhere
	bool operator>(Currency const&);
	//Post: value is returned

	bool operator<(Currency const&);

	//Pre: called anywhere
	bool operator==(Currency const&);
	//Post: value is returned
};