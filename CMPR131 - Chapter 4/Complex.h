#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include "input.h"
using namespace std;

class Complex
{
private:
	double realNumber;
	double imaginaryNumber;
public:
	// constructor
	Complex();
	Complex(double theRealNumber);
	Complex(double theRealNumber, double theImaginaryNumber);

	// accessors
	double getRealNumber();
	double getImaginaryNumber();

	//mutators
	void setRealNumber(double newRealNumber);
	void setImaginaryNumber(double newImaginaryNumber);

	// main process for complex numbers
	void complexMain();
	void menuPrint();
	void singleComplex();
	void multipleComplex();

	// friend operators
	friend ostream& operator << (ostream& outs, const Complex& object);
	friend istream& operator >> (istream& ins, Complex& object);
	friend bool operator == (const Complex& theObject1, const Complex& theObject2);
	friend bool operator != (const Complex& theObject1, const Complex& theObject2);
	friend Complex operator + (const Complex& theObject1, const Complex& theObject2);
	friend Complex operator - (const Complex& theObject1, const Complex& theObject2);
	friend Complex operator * (const Complex& theObject1, const Complex& theObject2);
	friend Complex operator / (const Complex& theObject1, const Complex& theObject2);

	friend Complex operator -(const Complex& theObject1);
};

#endif // !COMPLEX_H