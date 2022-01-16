#include <iostream>
#include <iomanip>

using namespace std;

/**
* PURPOSE: this console program breaks the total number of pennies into
*          respective USD and CAN denominations, and print the string buffer
*          containing the entire formatted output string to the console display
* PARAMETERS:
*     	None
* RETURN VALUES:
*     	None
*/

int main() {
   int numPennies = 0;
   int dollars;
   int quarters;
   int dimes;
   int nickels;
   float canadianRate = 1.33 / 1;
   float canadianDollars;

   cout << "Please enter all of your pennies: " << endl;
   cin >> numPennies;

   cout << showpoint << fixed << setprecision(6);

   canadianDollars = canadianRate * numPennies / 100;

   dollars = numPennies / 100;
   numPennies -= dollars * 100;
   quarters = numPennies / 25;
   numPennies -= quarters * 25;
   dimes = numPennies / 10;
   numPennies -= dimes * 10;
   nickels = numPennies / 5;
   numPennies -= nickels * 5;
   cout << "In US currency, you have: " << dollars << " dollars, " << quarters << " quarters, " << dimes << " dimes, ";
   cout << nickels << " nickels, and " << numPennies << " pennies." << endl;
   cout << "In Canadian currency you have: " << canadianDollars << " dollars." << endl;




   return 0;
}

