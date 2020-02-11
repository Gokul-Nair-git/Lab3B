#include "Rupee.h"

Rupee::Rupee(int x, int y)
{
	whole = x;
	fractional = y;
	wName = "Rupee";
	fName = "paise";
}

Currency Rupee::operator+(Currency const& c2)
{
	if (c2.getWName() == "Rupee" && c2.getFName() == "paise")
	{
		Rupee d1;

		d1.whole = whole + c2.getWhole();
		d1.fractional = fractional + c2.getFractional();

		if (d1.fractional >= 100) {
			d1.whole += (d1.fractional / 100);
			d1.fractional %= 100;
		}

		return d1;
	}
}

Currency Rupee::operator-(Currency const& c2)
{
	if (c2.getWName() == "Rupee" && c2.getFName() == "paise")
	{
		Rupee d1;

		d1.fractional = fractional - c2.getFractional();
		d1.whole = whole - c2.getWhole();

		if (d1.fractional < 0) {
			d1.whole -= (1 + ((-d1.fractional - 1) / 100));
			d1.fractional = 100 + (d1.fractional % 100);
		}
		if (d1.fractional < 0 || d1.whole < 0) {
			d1.whole = 0;
			d1.fractional = 0;
		}

		return d1;
	}
}

bool Rupee::operator>(Currency const& c)
{
	bool a = true;
	if (c.getWName() == "Rupee" && c.getFName() == "paise")
	{
		int x = 100 * whole + fractional;
		int y = 100 * c.getWhole() + c.getFractional();
		if (y >= x)  a = false;
	}
	else a = false;
	return a;
}

bool Rupee::operator<(Currency const& c)
{
	bool a = true;
	if (c.getWName() == "Rupee" && c.getFName() == "paise")
	{
		int x = 100 * whole + fractional;
		int y = 100 * c.getWhole() + c.getFractional();
		if (x >= y)  a = false;
	}
	else a = false;
	return a;
}

bool Rupee::operator==(Currency const& c)
{
	if (c.getWName() == "Rupee" && c.getFName() == "paise")
	{
		bool a = false;
		int x = 100 * whole + fractional;
		int y = 100 * c.getWhole() + c.getFractional();
		if (y == x)  a = true;
		return a;
	}
}