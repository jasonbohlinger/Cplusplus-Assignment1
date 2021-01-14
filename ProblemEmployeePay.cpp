#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv){
   const float PAY_RATE = 16.0;
   float numHoursWorked;
   float gross;
   float socialSecurityTax;
   float federalIncomeTax;
   float stateIncomeTax;
   float medicalInsurance = 10;
   float overtimeHours = 0;
   float overtimeMoney;
   float net;

   cout << "Enter the number of hours worked: ";
   cin >> numHoursWorked;
   cout << endl;
   if(numHoursWorked > 40){
      overtimeHours = numHoursWorked - 40;
      numHoursWorked = 40;
   }
   overtimeMoney = (PAY_RATE * 1.5) * overtimeHours;
   gross = (numHoursWorked * PAY_RATE) + overtimeMoney;
   cout << "The gross paycheck is: $" << fixed << setprecision(2) << gross << endl;

   socialSecurityTax = gross * 0.06;
   federalIncomeTax = gross * 0.14;
   stateIncomeTax = gross * 0.05;

   cout << "Amount removed for Social Security Tax: $" << fixed << setprecision(2) << socialSecurityTax << endl;
   cout << "Amount removed for Federal Income Tax: $" << fixed << setprecision(2) << federalIncomeTax << endl;
   cout << "Amount removed for State Income Tax: $" << fixed << setprecision(2) << stateIncomeTax << endl;
   cout << "Amount removed for Medical Insurance: $" << fixed << setprecision(2) << medicalInsurance << endl;

   net = gross - socialSecurityTax - federalIncomeTax - stateIncomeTax - medicalInsurance;
   cout << "Net paycheck: $" << fixed << setprecision(2) << net << endl;
   return 0;
}
