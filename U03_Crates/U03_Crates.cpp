/* CIS 276 Introduction to C/C++ Programming
* Chuck Nelson, Professor
*
* Student Information (please complete ? below)
*    Name:         Aleksandar Kljaic
*    RVC Email:    s0396785@student.rockvalleycollege.edu
* Class Information
*    Section:      CIS-276-I010
* Assignment Information
*    Project Name:     U03_Crates
*    Source File Name: U03_Crates.cpp
*    Directions:       U03_CratesDirections.txt
*---------------------------------------------------------------------
* This program is used by General Crates, Inc. to calculate
* the volume, cost, customer charge, and profit of a crate
* of any size. It calculates this data from user input, which
* consists of the dimensions of the crate.
*---------------------------------------------------------------------
*/

// STUDENT CODE BEGINS
// Aleksandar Kljaic - February 23, 2015

/* SAMPLE PROGRAM RUN
*
*      Enter the dimensions of the crate (in feet):
*      Length: 10
*      Width: 8
*      Height: 4
*
*      The volume of the crate is 320.00 cubic feet.
*      Cost to build:          $     73.60
*      Charge to customer:     $    160.00
*      Profit:                 $     86.40
*      *** End of Program ***
*
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

	const double COST_PER_CUBIC_FOOT = 0.23;
	const double CHARGE_PER_CUBIC_FOOT = 0.5;

	// variables 

	double length;
	double width;
	double height;
	double volume;
	double cost;
	double charge;
	double profit;

	// initialize

	length = 0.0;
	width = 0.0;
	height = 0.0;
	volume = 0.0;
	cost = 0.0;
	charge = 0.0;
	profit = 0.0;
	
	// User Input
	cout << "Enter the dimensions of the crate (in feet): " << endl;
	cout << "Length: "; // Length of the crate
	cin >> length;
	cout << "Width: ";  // Width of the crate
	cin >> width;
	cout << "Height: "; // Height of the crate
	cin >> height;

	// Spacer
	cout << endl;

	// Volume Calculation
	volume = length * width * height;
	cout << "The volume of the crate is " << volume << " cubic feet." << endl;
	cost = volume * COST_PER_CUBIC_FOOT;

	// Charges to Customer
	charge = volume * CHARGE_PER_CUBIC_FOOT;
	profit = charge - cost;

	// Setting Fix, showpoint, and setprecision to 2
	cout << fixed << showpoint << setprecision(2);

	// Cost to build
	cout << left << setw(16);
	cout << "Cost to build: ";

	cout << right << setw(10);
	cout << "$";

	cout << right << setw(9);
	cout << cost << endl;

	// Charge to customer
	cout << left << setw(16);
	cout << "Charge to customer: ";

	cout << right << setw(6);
	cout << "$";

	cout << right << setw(9);
	cout << charge << endl;

	// Profit
	cout << left << setw(16);
	cout << "Profit: ";

	cout << right << setw(10);
	cout << "$";

	cout << right << setw(9);
	cout << profit << endl;

	// Program Termination

	cout << endl;

	cin.get();

	cin.get(); // To hold console window when "Start without debugging"

	return 0;

}

// STUDENT CODE ENDS