#include "Rational.h"

// Main Menu
void Rational::mainMenu()
{
	do
	{
		cout << "\tA rational number is a number that can be written as a fraction, a/b, where a is numerator and\n";
		cout << "\tb is denominator. Rational numbers are all real numbers, and can be positive or negative. A\n";
		cout << "\tnumber that is not rational is called irrational. Most of the numbers that people use in everyday\n";
		cout << "\tlife are rational.These include fractions, integers and numbers with finite decimal digits.\n";
		cout << "\tIn general, a number that can be written as a fraction while it is in its own form is rational.\n";

		cout << "\n\t2> Rational Numbers";
		cout << "\n\t================================================================================";
		cout << "\n\t\tA> Rational Number";
		cout << "\n\t\tB> Multiple Rational Numbers";
		cout << "\n\t--------------------------------------------------------------------------------";
		cout << "\n\t\t0> Return";
		cout << "\n\t================================================================================\n";

		int option = inputChar("\n\tOption: ");
		system("cls");
		if (option == '0') break;

		switch (option)
		{
		case 'A': processARational(); break;
		case 'B': processMultipleRational(); break;

		default: cout << "\tERROR - Invalid option. Please re-enter.\n"; break;
		}
	} while (true);
}

// Main process for a Rational Number
void Rational::processARational()
{
	Rational temp;
	do
	{
		cout << "\n\tA> Rational Numbers";
		cout << "\n\t===========================================================";
		cout << "\n\t\t1> Enter the numerator";
		cout << "\n\t\t2> Enter the denominator";
		cout << "\n\t\t3> Display the rational number";
		cout << "\n\t\t4> Normalize the rational number";
		cout << "\n\t\t5> Negate the rational number";
		cout << "\n\t\t6> Add (+) the rational number with a constant";
		cout << "\n\t\t7> Subtract (-) the rational number with a constant";
		cout << "\n\t\t8> Multiply (*) the rational number with a constant";
		cout << "\n\t\t9> Divide (/) the rational number with a constant";
		cout << "\n\t-----------------------------------------------------------";
		cout << "\n\t\t0> Return";
		cout << "\n\t===========================================================\n";

		int option = inputInteger("\n\tOption: ", 0, 9);
		system("cls");

		cout << "\n";
		switch (option)
		{
		case 0: return; break;
		case 1: temp.setNumerator(inputInteger("\tEnter an integer for the numerator: ")); break;
		case 2: temp.setDenominator(inputInteger("\tEnter an integer for the denominator: ")); break;
		case 3: cout << "\tRational number R1 = " << temp << "\n"; break;
		case 4:
		{
			cout << "\tNormalized rational number R2 (a copy of R1)\n\n\t";
			Rational temp2(temp);
			cout << temp2.normalize(temp2) << "\n";

		} break;
		case 5:
		{
			cout << "\tNegated rational number R2 (a copy of R1)\n\n\t";
			Rational temp2(temp);
			cout << "-(" << temp2 << ") = ";
			cout << -temp2 << "\n";

		} break;
		case 6:
		{
			int value = inputInteger("\tEnter an integer value: ");
			Rational temp2(temp);
			cout << "\n\tR2 + value\n\t";
			cout << "(" << temp2 << ") + " << value << " = ";
			cout << temp2 + value << "\n";

			cout << "\n\tvalue + R2\n\t";
			cout << value << " + " << "(" << temp2 << ") = ";
			cout << value + temp2 << "\n";
		} break;
		case 7:
		{
			int value = inputInteger("\tEnter an integer value: ");
			Rational temp2(temp);
			cout << "\n\tR2 - value\n\t";
			cout << "(" << temp2 << ") - " << value << " = ";
			cout << temp2 - value << "\n";

			cout << "\n\tvalue - R2\n\t";
			cout << value << " - " << "(" << temp2 << ") = ";
			cout << value - temp2 << "\n";
		} break;
		case 8:
		{
			int value = inputInteger("\tEnter an integer value: ");
			Rational temp2(temp);
			cout << "\n\tR2 / value\n\t";
			cout << "(" << temp2 << ") * " << value << " = ";
			cout << temp2 * value << "\n";

			cout << "\n\tvalue / R2\n\t";
			cout << value << " * " << "(" << temp2 << ") = ";
			cout << value * temp2 << "\n";
		} break;
		case 9:
		{
			int value = inputInteger("\tEnter an integer value: ");
			Rational temp2(temp);
			cout << "\n\tR2 / value\n\t";
			cout << "(" << temp2 << ") / " << value << " = ";
			cout << temp2 / value << "\n";

			cout << "\n\tvalue / R2\n\t";
			cout << value << " / " << "(" << temp2 << ") = ";
			cout << value / temp2 << "\n";
		} break;
		default: cout << "\tERROR - Invalid option. Please re-enter.\n"; break;
		}
	} while (true);
}

// Main process for Multiple Rational Numbers
void Rational::processMultipleRational()
{
	Rational temp;
	Rational temp2;
	do
	{
		cout << "\n\tB> Multiple Rational Numbers";
		cout << "\n\t==========================================================================";
		cout << "\n\t\t1> Enter rational number R1";
		cout << "\n\t\t2> Enter rational number R2";
		cout << "\n\t\t3> Verify condition operators (==, !=, >=, >, <= and <) of R1 and R2";
		cout << "\n\t\t4> Evaluate arithmatic operators (+, - , * and /) of R1 and R2";
		cout << "\n\t\t5> Evaluate (3 * (R1 + R2) / 7) / (R2 - R1 / 9) >= 621/889";
		cout << "\n\t--------------------------------------------------------------------------";
		cout << "\n\t\t0> Return";
		cout << "\n\t==========================================================================\n";

		int option = inputInteger("\n\tOption: ", 0, 9);
		system("cls");

		cout << "\n";
		switch (option)
		{
		case 0: return; break;
		case 1:
		{
			cin >> temp;
			cout << "\n\tR1 = " << temp << "\n";
		} break;
		case 2:
		{
			cin >> temp2;
			cout << "\n\tR2 = " << temp2 << "\n";
		} break;
		case 3:
		{
			cout << "\n\tR1 == R2 -> (" << temp << ") == (" << temp2 << ") ? " << (temp == temp2 ? "True" : "False");
			cout << "\n\tR2 != R1 -> (" << temp2 << ") != (" << temp << ") ? " << (temp2 != temp ? "True" : "False");
			cout << "\n\tR1 >= R2 -> (" << temp << ") >= (" << temp2 << ") ? " << (temp >= temp2 ? "True" : "False");
			cout << "\n\tR2  > R1 -> (" << temp2 << ")  > (" << temp << ") ? " << (temp2 > temp ? "True" : "False");
			cout << "\n\tR1 <= R2 -> (" << temp << ") <= (" << temp2 << ") ? " << (temp <= temp2 ? "True" : "False");
			cout << "\n\tR2  < R1 -> (" << temp2 << ")  < (" << temp << ") ? " << (temp2 < temp ? "True" : "False");
			cout << endl;
		} break;
		case 4:
		{
			cout << "\n\tAddition    : R1 + R2 -> (" << temp << ") + (" << temp2 << ") ? " << temp + temp2;
			cout << "\n\tSubtraction : R2 - R1 -> (" << temp2 << ") - (" << temp << ") ? " << temp2 - temp;
			cout << "\n\tMutiplcation: R1 * R2 -> (" << temp << ") * (" << temp2 << ") ? " << temp * temp2;
			cout << "\n\tDivision    : R2 / R1 -> (" << temp2 << ") / (" << temp << ") ? " << temp2 / temp;
			cout << endl;
		} break;
		case 5:
		{
			cout << "\n\tR1 = " << temp;
			cout << "\n\tR2 = " << temp2;
			Rational temp3(621, 889);
			cout << "\n\tR3 = " << temp3 << '\n';
			cout << "\n\tEvaluating expression...";
			cout << "\n\t\t   (3 * (R1 + R2) / 7) / (R2 - R1 / 9) >= " << temp3 << " ?";
			cout << "\n\t  Step #1: (3 * (" << temp + temp2 << ") / 7) / (R2 - (" << temp / 9 << ")) >= " << temp3 << " ?";
			cout << "\n\t  Step #2: ((" << 3 * (temp + temp2) << ") / 7) / (" << temp2 - (temp / 9) << ") >= " << temp3 << " ?";
			cout << "\n\t  Step #3: (" << (3 * (temp + temp2)) / 7 << ") / (" << temp2 - (temp / 9) << ") >= " << temp3 << " ?";
			cout << "\n\t  Step #4: (" << ((3 * (temp + temp2)) / 7) / (temp2 - (temp / 9)) << ") >= " << temp3 << " ?";
			cout << "\n\t  Step #5: " << (((3 * (temp + temp2)) / 7) / (temp2 - (temp / 9)) >= temp3 ? "True" : "False");
			cout << endl;
		} break;
		default: cout << "\tERROR - Invalid option. Please re-enter.\n"; break;
		}
	} while (true);
}

Rational Rational::normalize(Rational& R1)
{
	Rational temp;
	int commonDivisor;
	if (R1.denominator < 0)
	{
		temp.numerator = ~R1.numerator;
		temp.denominator = ~R1.denominator;
	}
	else
	{
		temp.numerator = R1.numerator;
		temp.denominator = R1.denominator;
	}
	if (R1.denominator != 0)
	{
		commonDivisor = gcd(temp.numerator, temp.denominator);
		temp.numerator = (temp.numerator / commonDivisor);
		temp.denominator = (temp.denominator / commonDivisor);
	}
	else
	{
		temp.numerator = 0;
		temp.denominator = 0;
	}

	return temp;
}



Rational Rational::operator -()
{
	numerator = -numerator;
	return *this;
}

int Rational::getNumerator() const
{
	return numerator;
}

void Rational::setNumerator(int n)
{
	numerator = n;
}

int Rational::getDenominator() const
{
	return denominator;
}

void Rational::setDenominator(int d)
{
	denominator = d;
}


bool operator !=(const Rational& R1, const Rational& R2)
{
	return R1.numerator * R2.denominator != R2.numerator * R1.denominator;
}

bool operator ==(const Rational& R1, const Rational& R2)
{
	return R1.numerator * R2.denominator == R2.numerator * R1.denominator;
}

bool operator <(const Rational& R1, const Rational& R2)
{
	return R1.numerator * R2.denominator < R2.numerator* R1.denominator;
}

bool operator <=(const Rational& R1, const Rational& R2)
{
	return R1.numerator * R2.denominator <= R2.numerator * R1.denominator;
}

bool operator >(const Rational& R1, const Rational& R2)
{
	return R1.numerator * R2.denominator > R2.numerator * R1.denominator;
}

bool operator >=(const Rational& R1, const Rational& R2)
{
	return R1.numerator * R2.denominator >= R2.numerator * R1.denominator;
}

Rational operator +(const Rational& R1, const int i)
{
	Rational temp;
	temp.setNumerator(R1.getNumerator() + i * R1.getDenominator());
	temp.setDenominator(R1.getDenominator());
	temp = temp.normalize(temp);

	return temp;
}

Rational operator +(const int i, const Rational& R1)
{
	Rational temp;
	temp.setNumerator(R1.getNumerator() + i * R1.getDenominator());
	temp.setDenominator(R1.getDenominator());
	temp = temp.normalize(temp);

	return temp;
}

Rational operator +(const Rational& R1, const Rational& R2)
{
	Rational temp;
	if ((R1.denominator != 0 && R2.denominator != 0))
	{
		temp.numerator = R1.numerator * R2.denominator + R2.numerator * R1.denominator;
		temp.denominator = R1.denominator * R2.denominator;
	}
	else if (R1.denominator != 0 && R2.denominator == 0)
	{
		temp.numerator = R1.numerator;
		temp.denominator = R1.denominator;
	}
	else
	{
		temp.numerator = R2.numerator;
		temp.denominator = R2.denominator;
	}
	temp = temp.normalize(temp);
	return temp;
}

Rational operator -(const Rational& R1, const int i)
{
	Rational temp;
	temp.setNumerator(R1.getNumerator() - i * R1.getDenominator());
	temp.setDenominator(R1.getDenominator());
	temp = temp.normalize(temp);
	return temp;
}

Rational operator -(const int i, const Rational& R1)
{
	Rational temp;
	temp.setNumerator(i * R1.getDenominator() - R1.getNumerator());
	temp.setDenominator(R1.getDenominator());
	temp = temp.normalize(temp);
	return temp;
}

Rational operator -(const Rational& R1, const Rational& R2)
{
	Rational temp;
	if ((R1.denominator != 0 && R2.denominator != 0))
	{
		temp.numerator = R1.numerator * R2.denominator - R2.numerator * R1.denominator;
		temp.denominator = R1.denominator * R2.denominator;
	}
	else if (R1.denominator != 0 && R2.denominator == 0)
	{
		temp.numerator = R1.numerator;
		temp.denominator = R1.denominator;
	}
	else
	{
		temp.numerator = -R2.numerator;
		temp.denominator = R2.denominator;
	}
	temp = temp.normalize(temp);
	return temp;
}
Rational operator *(const Rational& R1, const Rational& R2)
{
	Rational temp;
	if ((R1.denominator != 0 && R2.denominator != 0))
	{
		temp.numerator = R1.numerator * R2.numerator;
		temp.denominator = R1.denominator * R2.denominator;
	}
	else
	{
		temp.numerator = 0;
		temp.denominator = 0;
	}
	temp = temp.normalize(temp);
	return temp;
}

Rational operator *(const Rational& R1, const int i)
{
	Rational temp;
	temp.setNumerator(R1.getNumerator() * i);
	temp.setDenominator(R1.getDenominator());
	temp = temp.normalize(temp);
	return temp;
}

Rational operator *(const int i, const Rational& R1)
{
	Rational temp;
	temp.setNumerator(i * R1.getNumerator());
	temp.setDenominator(R1.getDenominator());
	temp = temp.normalize(temp);
	return temp;
}

Rational operator /(const Rational& R1, const Rational& R2)
{
	Rational temp;
	if ((R1.denominator != 0 && R2.denominator != 0))
	{
		temp.numerator = R1.numerator * R2.denominator;
		temp.denominator = R1.denominator * R2.numerator;
	}
	else
	{
		temp.numerator = 0;
		temp.denominator = 0;
	}
	temp = temp.normalize(temp);
	return temp;
}

Rational operator /(const Rational& R1, const int i)
{
	Rational temp;
	temp.setNumerator(R1.getNumerator());
	temp.setDenominator(i * R1.getDenominator());
	temp = temp.normalize(temp);
	return temp;
}

Rational operator /(const int i, const Rational& R1)
{
	Rational temp;
	temp.setNumerator(i * R1.getDenominator());
	temp.setDenominator(R1.getNumerator());
	temp = temp.normalize(temp);
	return temp;
}

istream& operator >>(istream& ins, Rational& r)
{
	cout << "\tEnter the numerator: ";
	ins >> r.numerator;
	cout << "\tEnter the denominator: ";
	ins >> r.denominator;
	r = r.normalize(r);
	return ins;

}

ostream& operator <<(ostream& outs, const Rational& r)
{
	if (r.denominator == 0 && r.numerator > 0)
		outs << "undefine";
	else
		outs << r.numerator << "/" << r.denominator;
	return outs;
}

Rational::Rational() : numerator(0), denominator(1) {}
Rational::Rational(int wholeNumber) : numerator(wholeNumber), denominator(1) {}

Rational::Rational(int n, int d)
{
	if (d == 0)
	{
		numerator = 0;
		denominator = 0;
	}
	else
	{
		numerator = n;
		denominator = d;
	}
}

Rational::Rational(const Rational& R)
{
	numerator = R.numerator;
	denominator = R.denominator;
}