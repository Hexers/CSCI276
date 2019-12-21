/* CIS 276 Introduction to C/C++ Programming
* Chuck Nelson, Professor
*
* Student Information (please complete ? below)
*    Name:         Aleksandar Kljaic
*    RVC Email:    s0396785@student.rockvalleycollege.edu
* Class Information
*    Section:      CIS-276-I010
* Assignment Information
*    Project Name:     U02_EnterPrice
*    Source File Name: U02_EnterPrice.cpp
*    Directions:       U02_EnterPriceDirections.txt
*---------------------------------------------------------------------
*/


// STUDENT CODE BEGINS

/* SAMPLE PROGRAM RUN
*
* Enter regular price :   123.45
* Regular price       $   123.45
* Discount amount     $    24.69
* Sale price          $    98.76
*/

// preprocessor directives
#include <iostream>
#include <string> // string class library
#include <iomanip> // setw(), fixed, showpoint, setprecision, left, right 
using namespace std;


/* Function: main ()
*
* application entry point
*/
int main()
{

	// constants
	/*
	const int LABEL_LEFT = 16;
	const int LABEL_RIGHT = 5;
	const int VALUE_RIGHT = 9;
	*/
	// variables 

	double regularPrice;
	double discount;
	double salePrice;

	// initialize

	regularPrice = 0.0;
	discount = 0.0;
	salePrice = 0.0;

	// User Input
	cout << "Enter regular price: ";
	cin >> regularPrice;

	// Calculations
	discount = regularPrice * 0.20;
	salePrice = regularPrice - discount;


	cout << fixed << showpoint << setprecision(2);

	// Regular Price
	cout << left << setw(16);
	cout << "Regular price ";

	cout << right << setw(5);
	cout << "$";

	cout << right << setw(9);
	cout << regularPrice << endl;

	// Discount Amount
	cout << left << setw(16);
	cout << "Discount amount ";

	cout << right << setw(5);
	cout << "$";

	cout << right << setw(9);
	cout << discount << endl;

	// Sale Price

	cout << left << setw(16);
	cout << "Sale price ";

	cout << right << setw(5);
	cout << "$";

	cout << right << setw(9);
	cout << salePrice << endl;


	// Program Termination

	cout << endl;

	cin.get();

	cin.get(); // To hold console window when "Start without debugging"

	return 0;

}



// STUDENT CODE ENDS
