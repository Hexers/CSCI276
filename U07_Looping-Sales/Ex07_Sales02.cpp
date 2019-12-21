/*
 * CIS 276 Introduction to C/C++ Programming
 * Chuck Nelson, Professor
 *
 * Student Information (please complete ? below)
 *    Name:          Aleksandar Kljaic
 *    RVC Email:     s036785@student.rockvalleycollege.edu
 * Class Information
 *    Section:       CIS-276-I010
 * Exercise Information
 *                   Project Name:  Ex07_Sales02
 *                   Source Name:   Ex07_Sales02.cpp
 *---------------------------------------------------------------------
 * Report with an extended price and grand total
 */


//  preprocessor directives
#include <iostream>
#include <string>
#include <fstream>    // open()
#include <iomanip>    // setw(), setiosflags()
using namespace std;

// Disable warning messages 4996.
#pragma warning( disable : 4996 )

/* Function: main() *************************************************
 *
 * application entry point
 */
int main(void)
{
   /* declarations ***********************************************
      declare program data (scope: local)
   */
   int returnStatus = 0;
   int recordCode = 61;
   int salesRep;
   string dateOfSale;
   string productCode;
   string productDescription;
   int quantitySold;
   double unitPrice;
   double extendedPrice;
   double grandTotal;

   // program identifiers
   string programLoop;

   // file identifiers
   fstream inData;   // input file variable name=inData
   string filename;

   /* statements *************************************************
      declare program instructions
   */

   cout << "*** start of program ***" << endl;


   // Step #1: initialize program loop variable & others
   programLoop = "y";
   returnStatus = 0;

   // Step #2: do while program loop is Y or y
   while (programLoop == "y" || programLoop == "Y")
   {
	   // Step #3: get filename for user
	   cout << "Enter filename (SALES-RECORD.txt, SALES-RECORD2.txt, SALES-RECORD3.txt): ";
	   cin >> filename;

	   cout << endl;

	   // Step #4: open the file
	   inData.open(filename.c_str(), ios::in);

	   // Step #5: if file open failure?
	   if (!inData)
	   {
		   // Step #6 display file open failure message
		   cout << "<< Unable to open the file: " << filename << endl;
		   cin.get();

		   // Step #7 set return code to 1 (unsuccessful operation)
		   returnStatus = 1;
	   }
	   else
	   {
		   // Step #8 initialize items for this file run
		   returnStatus = 0; // set return code to successful operation
		   grandTotal = 0;   // set total to 0

		   // Step #9 read the fields of first row from the file
		   inData >> recordCode;
		   inData >> salesRep;
		   inData >> dateOfSale;
		   inData >> productCode;
		   inData >> productDescription;
		   inData >> quantitySold;
		   inData >> unitPrice;
		   inData >> extendedPrice;


		   // Step #10 ? end of file ?
		   while (!inData.eof())
		   {
			   // Step #11   format & display the file fields
			   cout << left << setw(15) << recordCode;
			   cout << left << setw(15) << salesRep;
			   cout << left << setw(15) << dateOfSale;
			   cout << left << setw(15) << productCode;
			   cout << right << setw(10) << productDescription;
			   cout << right << setw(10) << quantitySold;
			   cout << right << setw(10) << unitPrice;
			   cout << right << setw(10) << extendedPrice;
			   cout << endl;

			   // Step #12   accumulate grand total
			  extendedPrice += quantitySold * unitPrice;
			  grandTotal += extendedPrice;
			   

			   // Step #13   read fields of the next record
			   inData >> recordCode;
			   inData >> salesRep;
			   inData >> dateOfSale;
			   inData >> productCode;
			   inData >> productDescription;
			   inData >> quantitySold;
			   inData >> unitPrice;
			   inData >> extendedPrice;
		   } // end  while(!inData.eof() )
	   }   // end if(!inData)

	   // Step #14: close the file
	   inData.clear();
	   inData.close();

	   // Step #15: display grand total
	   cout << right << setw(30);
	   cout << "Grand Total:";
	   cout << setw(10) << grandTotal;
	   cout << " *" << endl;

	   // Step #16: run program again?
	   cout << "\nRun program again(y/n)? ";
	   cin >> programLoop;
   }

   // terminate the program
   cout << "*** end of program ***" << endl;
   cin.get();

   // Step #16: return
   return returnStatus; // 0=successful

} // end int main(void)
