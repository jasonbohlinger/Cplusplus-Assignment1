//CRUSH IT
#include <iostream>
using namespace std;

int main(int argc, char** argv){
   int maxCapacity;
   int numPeople;
   
   //Prompts user for the maximum capacity of the room
   cout << "Maximum room capacity: ";
   cin >> maxCapacity;
   cout << endl;

   //Prompts user for the number of people in the room
   cout << "The number of people in the room: ";
   cin >> numPeople;
   cout << endl;

   //Determines whether it is legal (number of people is less than or equal to max capacity)
      //or illegal (number of people is greater than max capacity)
   if(numPeople <= maxCapacity){
      cout << "It is legal to hold this meeting." << endl;
      cout << (maxCapacity - numPeople) << " more persons are allowed." << endl;
   } else{
      cout << "It is NOT legal to hold this meeting." << endl;
      cout << (numPeople - maxCapacity) << " persons must be removed." << endl;
   }
   return 0;
}
