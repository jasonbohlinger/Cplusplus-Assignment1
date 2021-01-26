//CRUSH IT
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv){
   const float PAY_RATE =  16.0;
   float numHoursWorked;
   float gross;
   float socialSecurityTax;
   float federalIncomeTax;
   float stateIncomeTax;
   float medicalInsurance = 10;
   float overtimeHours = 0;
   float overtimeMoney;
   float net;
   
   //Prompts user for the number of hours worked in a week
   cout << "Enter the number of hours worked: ";
   cin >> numHoursWorked;
   cout << endl;
   
   //Calculates the number of overtime hours (hours over 40)
   if(numHoursWorked > 40){
      overtimeHours = numHoursWorked - 40;
      numHoursWorked = 40;
   }
   //Calculates the amount of money earned from overtime
   overtimeMoney = (PAY_RATE * 1.5) * overtimeHours;
   //Calculates the raw paycheck including overtime hours
   gross = (numHoursWorked * PAY_RATE) + overtimeMoney;
   cout << "The gross paycheck is: $" << fixed << setprecision(2) << gross << endl;

   //Calculates taxes for Social Security, Federal Income, and State Income
   socialSecurityTax = gross * 0.06;
   federalIncomeTax = gross * 0.14;
   stateIncomeTax = gross * 0.05;

   //Prints the amounts of money removed from the gross total
   cout << "Amount removed for Social Security Tax: $" << fixed << setprecision(2) << socialSecurityTax << endl;
   cout << "Amount removed for Federal Income Tax: $" << fixed << setprecision(2) << federalIncomeTax << endl;
   cout << "Amount removed for State Income Tax: $" << fixed << setprecision(2) << stateIncomeTax << endl;
   cout << "Amount removed for Medical Insurance: $" << fixed << setprecision(2) << medicalInsurance << endl;

   //Calculates net total including all tax and prints it to console
   net = gross - socialSecurityTax - federalIncomeTax - stateIncomeTax - medicalInsurance;
   cout << "Net paycheck: $" << fixed << setprecision(2) << net << endl;
   return 0;
}
