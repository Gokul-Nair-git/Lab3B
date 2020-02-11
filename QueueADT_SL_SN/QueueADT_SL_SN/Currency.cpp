#include "Currency.h"

std::ostream& operator<<(std::ostream& out, Currency const& c) {
	out << c.wName << " " << c.whole << " " << c.fractional << " " << c.fName << std::endl;
	return out;
}

std::istream& operator>>(std::istream& in, Currency& c)
{
	in >> c.wName;
	in >> c.whole;
	in >> c.fractional;
	in >> c.fName;

	return in;
}


Currency Currency::operator+(Currency const& c2)
{
	Currency c1;

	c1.whole = whole + c2.whole;
	c1.fractional = fractional + c2.fractional;

	if (c1.fractional >= 100) {
		c1.whole += (c1.fractional / 100);
		c1.fractional %= 100;
	}

	return c1;
}

Currency Currency::operator-(Currency const& c2)
{
	Currency c1;

	c1.fractional = fractional - c2.fractional;
	c1.whole = whole - c2.whole;

	if (c1.fractional < 0) {
		c1.whole -= 1 + (c1.fractional / 100);
		c1.fractional = 100 + (c1.fractional % 100);
	}
	if (c1.fractional < 0 || c1.whole < 0) {
		c1.whole = 0;
		c1.fractional = 0;
	}

	return c1;
}

bool Currency::operator>(Currency const& c)
{
	bool a = true;
	int x = 100 * whole + fractional;
	int y = 100 * c.whole + c.fractional;
	if (y >= x)  a = false;
	if (c.fName == fName) a = false;
	return a;
}

bool Currency::operator<(Currency const& c)
{
	bool a = true;
	int x = 100 * whole + fractional;
	int y = 100 * c.whole + c.fractional;
	if (x >= y)  a = false;
	if (c.fName == fName) a = false;
	return a;
}


bool Currency::operator==(Currency const& c)
{
	bool a = false;
	int x = 100 * whole + fractional;
	int y = 100 * c.whole + c.fractional;
	if (y == x)  a = true;
	return a;
}