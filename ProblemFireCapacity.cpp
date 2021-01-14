#include <iostream>
using namespace std;

int main(int argc, char** argv){
   int maxCapacity;
   int numPeople;
   cout << "Maximum room capacity: ";
   cin >> maxCapacity;
   cout << endl;

   cout << "The number of people in the room: ";
   cin >> numPeople;
   cout << endl;

   if(numPeople <= maxCapacity){
      cout << "It is legal to hold this meeting." << endl;
      cout << (maxCapacity - numPeople) << " more persons are allowed." << endl;
   } else{
      cout << "It is NOT legal to hold this meeting." << endl;
      cout << (numPeople - maxCapacity) << " persons must be removed." << endl;
   }
   return 0;
}
