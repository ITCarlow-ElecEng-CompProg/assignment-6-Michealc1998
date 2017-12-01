/**
 * Exercise 6
 * Binary to decimal convertor
 * Micheal carroll
 * C00218621
 */

// preprocessor directives / header files
#include <iostream>
#include <cstdio>
#include <windows.h>
#include <math.h>

using namespace std;

//Main menu
int bin_2_dec(long long n)
{
    int decimal=0, i=0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n = n/10;
        decimal= decimal+remainder*pow(2,i);
        ++i;
    }
    return decimal;
}

int dec_2_bin(long long x)
{
    int re,binary=0,i=1;
    while (x!=0)
    {
      re=x%2;
      x=x/2;
      binary=binary+(re*i);
      i=i*10;
    }
    return binary;
}

void menu(void)
{

	system("cls");

	//print menu
	cout <<
            "\nDecimal / Binary Numbering Systems Conversion" <<
			"\n\nChoose from one of the following:" <<
			"\nb - Binary to decimal" <<
			"\nd - Decimal to binary"
			"\nq - quit" << endl;

	return;
}


// main function
int main(void)
{
	// variable declarations
	char input;

	// continue running program until q is pressed
	do
	{
		// display menu and get input from user
		menu();
		fflush(stdin);
		cin >> input;
		fflush(stdin);

		// switch case statement to implement user's decision
		switch (input)
		{
		    //Bin to Dec
			case 'b':   cout << "\nBinary to decimal conversion...\n" << endl;
                        long long n;
                        cout << "Enter a binary number: ";
                        cin >> n;
                        cout << n << " in binary = " << bin_2_dec(n) << " in decimal";
                        fflush(stdin);
						getchar();
						break;

            // Dec to Bin
			case 'd':   cout << "\nDecimal to binary conversion...\n" << endl;
                        long long x;
                        cout << "Enter a decimal number: ";
                        cin >> x;
                        cout << x << " in decimal = " << dec_2_bin(x) << " in binary";
                        fflush(stdin);
						getchar();
						break;

            //project end
			case 'q':   cout << "\nThanks for using the program\n" << endl;
                        cout << "Press any key to close window"<< endl;
                        fflush(stdin);
                        break;

			default:	cout << "\nInvalid input, try again...\n" << endl;

						cout << "Press any key to continue..." << endl;
						fflush(stdin);
						getchar();
						break;
		}
	}
	while (input != 'q');

	return 0;
}
