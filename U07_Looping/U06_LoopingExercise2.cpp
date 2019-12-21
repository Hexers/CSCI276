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
 *    Project Name:     U06_LoopingExercise2.cpp
 *    Source Name:      U06_LoopingExercise2.cpp.cpp
 *---------------------------------------------------------------------
 See directions to add a program loop to this working program.
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
    //declare variables
    int multiplicand = 0;

    //input
    do
    {
        cout << "Enter the multiplicand: ";
        cin >> multiplicand;
        cout << endl;

        //processing and output
        for (int multiplier = 1; multiplier <= 10; multiplier += 1)
        {
            int total = multiplicand * multiplier;
            cout << multiplicand << " multiplied by " << multiplier
                 << " is equal to " << total << endl;
            cout << endl;
        } //end for
    } while ( multiplicand != -1 );

   // program termination
   cin.ignore();
   cin.get();

   return 0;
}  //end of main function

