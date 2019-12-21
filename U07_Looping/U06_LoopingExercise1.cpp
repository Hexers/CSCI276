/*
 * CIS 276 Introduction to C/C++ Programming
 * Chuck Nelson, Professor
 *
 * Student Information (please complete ? below)
 *    Name:         Aleksandar Kljaic
 *    RVC Email:    s0396785@student.rockvalleycollege.edu
 * Class Information
 *    Section:      CIS-276-I010
 * Assignment Information
 *    Project Name:     U06_LoopingExercise1
 *    Source Name:      U06_LoopingExercise1.cpp
 *---------------------------------------------------------------------
 See directions to add a program loop to this working program.
 */

// additional preprocessor statements may be needed
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
   // data declarations
   int salesAmount  = 0;
   int totalSales   = 0;
   string choice; // program loop exit variable

   // statements begin here
   // initialize loop exit variable
   cout << endl;
   cout << "Do you want to enter a sales amount (Y or N)? ";
   cin >> choice;

   // test loop exit variable
   while(choice == "Y" || choice == "y")  // continue or exit loop?
   // replace this line with the 'while' program loop statement
   {
      // INPUT
      cout << "Enter the sales amount: ";
      cin >> salesAmount;

      // PROCESSING
      totalSales += salesAmount;

      // update loop exit variable
	  cout << endl;
      cout << "Do you want to enter a sales amount (Y or N)? ";
      cin >> choice;

   }//end while

   // OUTPUT
   cout << fixed << setprecision(0);
   cout << "Total sales: $" << totalSales << endl;

   // program termination
   cin.ignore();
   cin.get();

   return 0;
}  //end of main function
