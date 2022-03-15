// date: 03/13/2022
// description: Chapter 4 - Assignment

#include <iostream>
#include "input.h" // use for validate input
#include "Rational.h"
#include "Complex.h"

using namespace std;

// Prototype
int menuOption();

int main()
{
    do
    {
        switch (menuOption())
        {
        case 0: exit(1); break;
        case 1:
        {
            Complex c1;
            c1.complexMain();
        } break;
        case 2:
        {
            Rational rat;
            rat.mainMenu();
        } break;
        case 3:
        {

        } break;
        default: cout << "\n\tERROR - Invalid option. Please re-enter.\n"; break;
        }
        /*cout << "\n";
        system("pause");*/
    } while (true);

    return EXIT_SUCCESS;
}

// return a valid option (0...n)
int menuOption()
{
    cout << "\n\t=========================================================================";
    cout << "\n\tCMPR131 Chapter 4 - Complex Numbers, Rational Numbers, Polynomials by:";
    cout << "\n\tAlavi, Eduardo";
    cout << "\n\t=========================================================================";
    cout << "\n\t\t1> Complex Numbers";
    cout << "\n\t\t2> Rational Numbers";
    cout << "\n\t\t3> Polynomials";
    cout << "\n\t-------------------------------------------------------------------------";
    cout << "\n\t\t0> Exit";
    cout << "\n\t=========================================================================\n";

    int option = inputInteger("\tOption: ", 0, 3);
    system("cls");

    cout << "\n";
    return option;
}