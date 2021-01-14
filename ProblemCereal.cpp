#include <iostream>

using namespace std;
int main(int argc, char** argv){
   float weightOunces;
   float weightTons;
   cout << "Enter the weight of the cereal box in ounces: ";
   cin >> weightOunces;
   cout << endl;

   weightTons = weightOunces / 35273.92;
   cout << "That is " << weightTons << " tons." << endl;
   float boxesNeeded = 1 / weightTons;
   cout << "You need " << boxesNeeded << " boxes to yield one metric ton." << endl;
   return 0;
}
