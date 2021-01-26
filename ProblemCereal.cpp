//CRUSH IT
#include <iostream>

using namespace std;
int main(int argc, char** argv){
   float weightOunces;
   float weightTons;
   //Prompts user to input the weight of the cereal box in ounces
   cout << "Enter the weight of the cereal box in ounces: ";
   cin >> weightOunces;
   cout << endl;

   //Calculates the weight in tons using the weight in ounces and prints to console
   weightTons = weightOunces / 35273.92;
   cout << "That is " << weightTons << " tons." << endl;
   //Calculates the number of boxes needed in order to make a ton and prints to console
   float boxesNeeded = 1.0 / weightTons;
   cout << "You need " << boxesNeeded << " boxes to yield one metric ton." << endl;
   return 0;
}
