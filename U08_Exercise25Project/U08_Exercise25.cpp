/*
 * CIS 276 Introduction to C/C++ Programming
 * Chuck Nelson, Professor
 *
 * Student Information (please complete ? below)
 *    Name:         Aleksandar Kljaic
 *
 * Class Information
 *    Section:      CIS-276-I010
 * Assignment Information
 *    Project Name:  U08_Exercise25
 *    Source Name:   U08_Exercise25.cpp
 *    Exe Name:      U08_Exercise25.exe
 *---------------------------------------------------------------------
 */

// Convert to functions 
/*
   Input functions:
      one at a time, code the following 3 functions
         enterBagSize() <- this may already be coded as an example
         enterCost()
         enterArea()
      NOTE: for each, code the function, then code the function prototype, and last code the function call. 

   Processing functions:
      one at a time, code the following 2 functions
         calcFertilizerPerPound()
         calcFertilizerPerSquareFoot()
      NOTE: for each, code the function, then code the function prototype, and last code the function call. 
   Output functions:
      one at a time, code the following 2 functions
         displayFertilizerPerPound()
         displayFertilizerPerSquareFoot()
      NOTE: for each, code the function, then code the function prototype, and last code the function call. 

*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
   // add 7 prototypes here!
   double enterBagSize();
   double enterCost();
   double enterArea();
   double calcFertilizerPerPound(double cost, double bagSize);
   double calcFertilizerPerSquareFoot();
   void displayFertilizerPerPound(double fertilizerPerPound);
   void displayFertilizerPerSquareFoot(double fertilizerPerSquareFoot);




   // declare local data
   double cost;        // INPUT: cost of one bag
   double area;        // INPUT: area to be fertilized
   double bagSize;     // INPUT: the amount of fertilizer, in pounds
   double fertilizerPerPound;         // PROCESSING: calculated value
   double fertilizerPerSquareFoot;    // PROCESSING: calculated value

   string loopExitVariable = "Y";      // program loop exit variable

   // program loop begins
   do
   {
	   

      // INPUT
      //cout << "Enter the amount of fertilizer, in pounds, "
      //      << "in one bag: ";
      //cin >> bagSize;
      //cout << endl;
	//  bagSize = enterBagSize();

      

	 // cout << "Enter the cost per bag: ";
	 // cin >> cost;
     // cout << endl;

     // cout << "Enter the area, in square feet, that can be "
     //       << "fertilized by one bag: ";
     // cin >> area;
     // cout << endl;

      // PROCESSING
     // fertilizerPerPound = cost / bagSize;

     // fertilizerPerSquareFoot = cost / area;

      // OUTPUT
     // cout << fixed << showpoint << setprecision(2);
    //  cout << "The cost of the fertilizer per pound is: $"
    //       << fertilizerPerPound << endl;

    //  cout << fixed << showpoint << setprecision(8);
     // cout << "The cost of fertilizing per square foot is: $"
     //      << fertilizerPerSquareFoot << endl;

      // program loop update: excute loop or exit loop?
      cout << "Run again(Y/N)? ";
      cin >> loopExitVariable;

   }  while (loopExitVariable == "Y" || loopExitVariable == "y");

   // program termination
   cin.ignore();
   cin.get();
   return 0;
}

//-------------------------------------------------------------------
// Input Functions
//-------------------------------------------------------------------


/* Function: enterBagSize() *****************************************
 * parameters: none
 * return:     bagSize : double (pass by value)
 * 'enter' functions will always have 3 steps
 */
// STUDENT CODE BEGINS
double enterBagSize()
{
   // STEP #1 - declare variable for inputed value
   double bagSize;

   // STEP #2 - prompt user & get input value
   cout << "Enter the amount of fertilizer, in pounds, "
         << "in one bag: ";
   cin >> bagSize;
   cout << endl;

   // STEP #3 - return inputed value to calling function
   return bagSize;

}

// STUDENT CODE ENDS

 /* Function: enterCost() *******************************************
  * parameters: none
  * return:     cost : double (pass by value)
  *
  */
// STUDENT CODE BEGINS
double enterCost()
{
	double cost;

	  cout << "Enter the cost of the 50 pound fertilizer bag: ";
	  cin >> cost;
      cout << endl;

	  return cost;

// STUDENT CODE ENDS



 /* Function: enterArea() *******************************************
  * parameters: none
  * return:     area : double (pass by value)
  *
  */
// STUDENT CODE BEGINS
double enterArea()
{
	double area;

    cout << "Enter the area, in square feet, that can be "
         << "fertilized by one bag: ";
    cin >> area;
    cout << endl;

	return area;
}

// STUDENT CODE ENDS




 //-------------------------------------------------------------------
 // Processing Functions
 //-------------------------------------------------------------------

 /* Function: calcFertilizerPerPound() ******************************
  * parameters: cost   : double
  *             bagSize: double
  * return:     fertilizerPerPound : double
  */
// STUDENT CODE BEGINS
double calcFertilizerPerPound(double cost, double bagSize)
{
	double fertilizerPerPound;

	fertilizerPerPound = cost / bagSize;
	
	return fertilizerPerPound;
}

// STUDENT CODE ENDS



 /* Function: calcFertilizerPerSquareFoot() *************************
  * parameters: cost   : double
  *             area   : double
  * return:     fertilizerPerSquareFoot : double
  */
// STUDENT CODE BEGINS
double calcFertilizerPerSquareFoot(double cost, double area)
{
	double fertilizerPerSquareFoot;

	fertilizerPerSquareFoot = cost / area;

	return fertilizerPerSquareFoot;
}


// STUDENT CODE ENDS



//-------------------------------------------------------------------
// Output Functions
//-------------------------------------------------------------------

/* Function: displayFertilizerPerPound(double)    *******************
 * parameters: fertilizerPerPound : double
 * return:     void
 */

// STUDENT CODE BEGINS
void displayFertilizerPerPound(double fertilizerPerPound)
{
	 cout << fixed << showpoint << setprecision(2);
     cout << "The cost of the fertilizer per pound is: $"
           << fertilizerPerPound << endl;

	 return void;
}
// STUDENT CODE ENDS




/* Function: displayFertilizerPerSquareFoot(double)    **************
 * parameters: fertilizerPerSquareFoot : double
 * return:     void
 */

// STUDENT CODE BEGINS
void displayFertilizerPerSquareFoot(double fertilizerPerSquareFoot)
{
	  cout << fixed << showpoint << setprecision(8);
      cout << "The cost of fertilizing per square foot is: $"
           << fertilizerPerSquareFoot << endl;

	  return void;
}
// STUDENT CODE ENDS

