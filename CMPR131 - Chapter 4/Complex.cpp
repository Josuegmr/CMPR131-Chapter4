#include "Complex.h"

// prototype
void allArithmaticOperators(Complex c1, Complex c2);
void evaluationSteps(Complex c1, Complex c2);

Complex::Complex()
{
	realNumber = 0;
	imaginaryNumber = 0;
}

Complex::Complex(double theRealNumber)
{
	realNumber = theRealNumber;
	imaginaryNumber = 0;
}

Complex::Complex(double theRealNumber, double theImaginaryNumber)
{
	realNumber = theRealNumber;
	imaginaryNumber = theImaginaryNumber;
}

double Complex::getRealNumber()
{
	return realNumber;
}
double Complex::getImaginaryNumber()
{
	return imaginaryNumber;
}

void Complex::setRealNumber(double newRealNumber)
{
	realNumber = newRealNumber;
}
void Complex::setImaginaryNumber(double newImaginaryNumber)
{
	imaginaryNumber = newImaginaryNumber;
}


///////////////////////////////////////////////////////////////////////////////////
void Complex::complexMain()
{
	do
	{
		system("cls");
		menuPrint();
		int option = inputChar("\t\tOption: ");
		if (option == '0') break;

		switch (option)
		{
		case 'A': singleComplex(); break;
		case 'B': multipleComplex(); break;

		default: cout << "\tERROR - Invalid option. Please re-enter.\n"; system("pause"); break;
		}
	} while (true);
}

void Complex::menuPrint()
{
	cout << "\n\tA complex number is a number that can be expressed in the form a + b i, where a and b are real";
	cout << "\n\tnumbers, and i represents the 'imaginary uni', satisfying the equation i ^ 2 = -1. Because no";
	cout << "\n\treal number satisfies this equation, i is called an imaginary number.For the complex number";
	cout << "\n\ta + b i, a is called the real partand b is called the imaginary part.";
	cout << "\n\n\t1> Complex Numbers";
	cout << "\n\t===============================================================================================";
	cout << "\n\t\tA> A Complex Number";
	cout << "\n\t\tB> Multiple Complex Numbers";
	cout << "\n\t===============================================================================================";
	cout << "\n\t\t0> return";
	cout << "\n\t===============================================================================================\n";
}

void Complex::singleComplex()
{
	Complex c1(0.0, 0.0);
	Complex c2(0.0, 0.0);
	do
	{
		system("cls");
		cout << "\n\n\tA> Complex Numbers";
		cout << "\n\t===============================================================================================";
		cout << "\n\t\t1> Enter the real number";
		cout << "\n\t\t2> Enter the imaginary number";
		cout << "\n\t\t3> Display the complex number";
		cout << "\n\t\t4> Negate the complex number";
		cout << "\n\t\t5> Add (+) the complex number with a constant";
		cout << "\n\t\t6> Subtract (-) the complex number with a constant";
		cout << "\n\t\t7> Multiply (*) the complex number with a constant";
		cout << "\n\t\t8> Divide (/) the complex number with a constat";
		cout << "\n\t===============================================================================================";
		cout << "\n\t\t0> return";
		cout << "\n\t===============================================================================================";

		int option = inputInteger("\n\t\tOption: ");
		if (option == 0) break;

		switch (option)
		{
		case 1:
		{
			double temp = inputDouble("\n\n\tEnter a number (double value) for the real part: ");
			c1.setRealNumber(temp);
		} break;
		case 2:
		{
			double temp = inputDouble("\n\n\tEnter a number (double value) for the imaginary part: ");
			c1.setImaginaryNumber(temp);
		} break;
		case 3: cout << "\n\t\tComplex Number C1: " << c1 << "\n\n"; break;
		case 4:
		{
			c2 = -c1;
			cout << "\n\t\tNegated the complex number c2 (a copy of c1): " << c2 << "\n\n";
		} break;
		case 5:
		{
			double temp = inputDouble("\n\t\tEnter a value (double): ");
			cout << "\n\t\tc1 + value\n\t\t(" << c1 << ") + " << temp << " = " << c1 + temp << "\n";
			cout << "\n\t\tvalue + c1\n\t\t" << temp << " + (" << c1 << ") = " << temp + c1 << "\n\n";
		} break;
		case 6:
		{
			double temp = inputDouble("\n\t\tEnter a value (double): ");
			cout << "\n\t\tc1 + value\n\t\t(" << c1 << ") - " << temp << " = " << c1 - temp << "\n";
			cout << "\n\t\tvalue + c1\n\t\t" << temp << " - (" << c1 << ") = " << temp - c1 << "\n\n";
		} break;
		case 7:
		{
			double temp = inputDouble("\n\t\tEnter a value (double): ");
			cout << "\n\t\tc1 + value\n\t\t(" << c1 << ") * " << temp << " = " << c1 * temp << "\n";
			cout << "\n\t\tvalue + c1\n\t\t" << temp << " * (" << c1 << ") = " << temp * c1 << "\n\n";
		} break;
		case 8:
		{
			double temp = inputDouble("\n\t\tEnter a value (double): ");
			cout << "\n\t\tc1 + value\n\t\t(" << c1 << ") / " << temp << " = " << c1 / temp << "\n";
			cout << "\n\t\tvalue + c1\n\t\t" << temp << " / (" << c1 << ") = " << temp / c1 << "\n\n";
		} break;

		default: cout << "\n\tERROR - Invalid option. Please re-enter.\n"; break;
		}
		//system("pause");
	} while (true);
}

void Complex::multipleComplex()
{
	Complex c1(0.0, 0.0);
	Complex c2(0.0, 0.0);
	do
	{
		system("cls");
		cout << "\n\n\tB> Multiple Complex Numbers";
		cout << "\n\t===============================================================================================";
		// cout << "\n\t\t" << c1 << "\n\t\t" << c2; // testing purposes
		cout << "\n\t\t1> Enter complex number c1";
		cout << "\n\t\t2> Enter complex number c2";
		cout << "\n\t\t3> Verify condition operators (== and !=) of c1 and c2";
		cout << "\n\t\t4> Evaluate arithmatic operators (+, -, *, and /) of c1 and c2";
		cout << "\n\t\t5> Evaluate steps in (3 * (c1 + c2) / 7) / (c2 - c1 / 9) != 1.07109 + 0.120832i) ?";
		cout << "\n\t===============================================================================================";
		cout << "\n\t\t0> return";
		cout << "\n\t===============================================================================================";

		int option = inputInteger("\n\t\tOption: ");
		if (option == 0) break;

		switch (option)
		{
		case 1: cin >> c1; break;
		case 2: cin >> c2; break;
		case 3:
		{
			//cout << (c1 == c2 ? "\n\t\tc1 is equal to c2.\n\n" : "\n\t\tc1 is not equal to c2.\n\n");
			cout << "\n\t\tc1 == c2 -> " << c1 << " == " << c2 << "? ";
			if (c1 == c2)
				cout << "true\n";
			else
				cout << "false\n";

			cout << "\n\t\tc2 != c1 -> " << c2 << " != " << c1 << "? ";
			if (c2 != c1)
				cout << "true\n";
			else
				cout << "false\n";
		} break;
		case 4: allArithmaticOperators(c1, c2); break;
		case 5: evaluationSteps(c1, c2); break;

		default: cout << "\n\tERROR - Invalid option. Please re-enter.\n"; break;
		}
		//system("pause");
	} while (true);
}

// Local function that prints out all arithmatic operators for multiple complex numbers
void allArithmaticOperators(Complex c1, Complex c2)
{
	cout << "\nAddition\t:";
	cout << "  c1 + c2 -> (" << c1 << ") + (" << c2 << ") = " << c1 + c2;
	cout << "\n\t\t   c2 + c1 -> (" << c2 << ") + (" << c1 << ") = " << c2 + c1 << "\n\n";

	cout << "Subtraction\t:";
	cout << "  c1 + c2 -> (" << c1 << ") - (" << c2 << ") = " << c1 - c2;
	cout << "\n\t\t   c2 + c1 -> (" << c2 << ") - (" << c1 << ") = " << c2 - c1 << "\n\n";

	cout << "Multiplication\t:";
	cout << "  c1 + c2 -> (" << c1 << ") * (" << c2 << ") = " << c1 * c2;
	cout << "\n\t\t   c2 + c1 -> (" << c2 << ") * (" << c1 << ") = " << c2 * c1 << "\n\n";

	cout << "Divistion\t:";
	cout << "  c1 + c2 -> (" << c1 << ") / (" << c2 << ") = " << c1 / c2;
	cout << "\n\t\t   c2 + c1 -> (" << c2 << ") / (" << c1 << ") = " << c2 / c1 << "\n\n";
}

// case 5 evaluations steps
void evaluationSteps(Complex c1, Complex c2)
{
	Complex c3(1.07109, 0.120832);
	cout << "\n\t\t5> Evaluating expression...";
	cout << "\n\t\t\t     (3 * (c1 + c2) / 7) / (c2 - c1 / 9) != " << c3 << " ? ";
	cout << "\n\t\t\t  -> (3 * ((" << c1 << ") + (" << c2 << ")) / 7) / ((" << c2 << ") - (" << c1 << ")) / 9) != " << c3 << " ? ";
	cout << "\n\n\t\t\tstep #1: (3 * (" << c1 + c2 << ") / 7) / ((" << c2 << ") - (" << c1 / 9 << ")) != " << c3 << " ? ";
	cout << "\n\t\t\tstep #2: (" << 3 * (c1 + c2) << ") / 7) / (" << c2 - (c1 / 9) << ") != " << c3 << " ? ";
	cout << "\n\t\t\tstep #3: (" << (3 * (c1 + c2)) / 7 << ") / (" << c2 - (c1 / 9) << ") != " << c3 << " ? ";
	cout << "\n\t\t\tstep #4: (" << ((3 * (c1 + c2)) / 7) / (c2 - (c1 / 9)) << ") != " << c3 << " ? ";
	cout << "\n\t\t\tstep #5: ";
	cout << ((((3 * (c1 + c2)) / 7) / (c2 - (c1 / 9))) != c3 ? "true\n" : "false\n");
}

///////////////////////////////////////////////////////////////////////////////////
ostream& operator << (ostream& outs, const Complex& object)
{
	outs << object.realNumber << " + " << object.imaginaryNumber << "i";
	return outs;
}

istream& operator >> (istream& ins, Complex& object)
{
	object.realNumber = inputDouble("\n\n\tEnter the real number: ");
	object.imaginaryNumber = inputDouble("\n\tEnter the imaginary number: ");
	//cout << "Enter the real number: ";
	//ins >> object.realNumber;
	//cout << "Enter the complex number (without the 'i'): ";
	//ins >> object.imaginaryNumber;

	return ins;
}

bool operator == (const Complex& theObject1, const Complex& theObject2)
{
	if ((theObject1.realNumber == theObject2.realNumber) && (theObject1.imaginaryNumber == theObject2.imaginaryNumber))
		return true;
	else
		return false;
}

bool operator != (const Complex& theObject1, const Complex& theObject2)
{
	if ((theObject1.realNumber != theObject2.realNumber) || (theObject1.imaginaryNumber != theObject2.imaginaryNumber))
		return true;
	else
		return false;
}

Complex operator + (const Complex& theObject1, const Complex& theObject2)
{
	Complex temp(theObject1.realNumber + theObject2.realNumber, theObject1.imaginaryNumber + theObject2.imaginaryNumber);
	return temp;
}

Complex operator - (const Complex& theObject1, const Complex& theObject2)
{
	Complex temp(theObject1.realNumber - theObject2.realNumber, theObject1.imaginaryNumber - theObject2.imaginaryNumber);
	return temp;
}

Complex operator * (const Complex& theObject1, const Complex& theObject2)
{
	Complex temp((theObject1.realNumber * theObject2.realNumber) + (theObject1.imaginaryNumber * theObject2.imaginaryNumber * -1),
		(theObject1.realNumber * theObject2.imaginaryNumber) + (theObject1.imaginaryNumber * theObject2.realNumber));
	return temp;
}

Complex operator / (const Complex& theObject1, const Complex& theObject2)
{
	Complex temp(((theObject1.realNumber * theObject2.realNumber) + (theObject1.imaginaryNumber * (theObject2.imaginaryNumber)))
		/ ((theObject2.realNumber * theObject2.realNumber) + (theObject2.imaginaryNumber * theObject2.imaginaryNumber)),
		((theObject1.imaginaryNumber * theObject2.realNumber) + (theObject1.realNumber * ((-1) * (theObject2.imaginaryNumber))))
		/ ((theObject2.realNumber * theObject2.realNumber) + (theObject2.imaginaryNumber * theObject2.imaginaryNumber)));
	return temp;
}
Complex operator -(const Complex& theObject1)
{
	Complex temp(theObject1.realNumber * -1, theObject1.imaginaryNumber * -1);
	return temp;
}