#pragma once
#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>
#include "input.h"
using namespace std;

class Rational
{
private:
	int numerator;
	int denominator;
	int gcd(int x, int y)
	{
		int g;

		/* Work with absolute values (positive integers) */
		if (x < 0)
		{
			x = -x;
		}
		if (y < 0)
		{
			y = -y;
		}
		if ((x + y) == 0)
		{
			return 0; /* Error, both parameters zero */
		}
		g = y;
		/* Iterate until x = 0 */
		while (x > 0)
		{
			g = x;
			x = y % x;
			y = g;
		}

		return g;
	}

public:
	// Default Constructor
	Rational();
	// Construcors
	Rational(int wholeNumber);
	Rational(int n, int d);
	// Copy Constructor
	Rational(const Rational& R);

	// Mutators
	void setNumerator(int n);
	void setDenominator(int d);

	// Accessors
	int getNumerator() const;
	int getDenominator() const;

	void mainMenu();
	void processARational();
	void processMultipleRational();


	Rational normalize(Rational& R1);
	Rational operator -();

	friend istream& operator >>(istream& ins, Rational& r);
	friend ostream& operator <<(ostream& outs, const Rational& r);
	friend bool operator ==(const Rational& R1, const Rational& R2);
	friend bool operator !=(const Rational& R1, const Rational& R2);
	friend bool operator <(const Rational& R1, const Rational& R2);
	friend bool operator <=(const Rational& R1, const Rational& R2);
	friend bool operator >(const Rational& R1, const Rational& R2);
	friend bool operator >=(const Rational& R1, const Rational& R2);
	friend Rational operator +(const Rational& R1, const Rational& R2);
	friend Rational operator +(const Rational& R1, const int i);
	friend Rational operator +(const int i, const Rational& R1);
	friend Rational operator -(const Rational& R1, const Rational& R2);
	friend Rational operator -(const Rational& R1, const int i);
	friend Rational operator -(const int i, const Rational& R1);
	friend Rational operator *(const Rational& R1, const Rational& R2);
	friend Rational operator *(const Rational& R1, const int i);
	friend Rational operator *(const int i, const Rational& R1);
	friend Rational operator /(const Rational& R1, const Rational& R2);
	friend Rational operator /(const Rational& R1, const int i);
	friend Rational operator /(const int i, const Rational& R1);
};

#endif // !RATIONAL_H

