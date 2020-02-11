#pragma once
#include <iostream>
#include <string>

class Currency
{
protected:
	int whole, fractional;
	std::string wName, fName;

public:
	//Pre: called in wallet class when dynamically allocated array is called, and in the main when creating an object to add to the existing currency object in wallet
	Currency(int x = 0, int y = 0) :whole(x), fractional(y) {}
	//Post: Currency Object is created

	//Pre: called anywhere
	int getWhole() const { return whole; }
	//Post: value is returned

	//Pre: called anywhere
	int getFractional() const { return fractional; }
	//Post: value is returned

	//Pre: called anywhere
	std::string getWName() const { return wName; }
	//Post: value is returned

	//Pre: called anywhere
	std::string getFName() const { return fName; }
	//Post: value is returned

	//Pre: called anywhere
	void setWhole(int w) { whole = w; }
	//Post: value is set

	//Pre: called anywhere
	void setFractional(int f) { fractional = f; }
	//Post: value is set

	//Pre: called anywhere
	void empty() { whole = 0, fractional = 0; }
	//Post: values are set to 0

	//Pre: never called, only to be overridden
	virtual Currency operator+(Currency const&);
	//Post: never called, only to be overridden

	//Pre: never called, only to be overridden
	virtual Currency operator-(Currency const&);

	//Pre: never called, only to be overridden
	virtual bool operator>(Currency const&);

	virtual bool operator<(Currency const&);

	//Pre: never called, only to be overridden
	virtual bool operator==(Currency const&);

	//Pre: Called in main to output values
	friend std::ostream& operator<<(std::ostream& out, const Currency& c);
	//Pre: values are outputted to the ostream

	//Pre: Called in main to create new currency object
	friend std::istream& operator>>(std::istream& in, Currency& c);
	//Pre: new currency object is created
};