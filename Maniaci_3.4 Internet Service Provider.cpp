//3.4 Internet Service Provider
//xander maniaci
#include <iostream>
#include <iomanip>
using namespace std;

int main (){
     int input = 0 , hours = 0;
     double  perMonth = 0, cost = 0;
     //creates two int and double variables
     cout<< setprecision(2)<< fixed << showpoint <<endl;
     //needed to display dollar amount properly. to the second decimal shows zeros and displays in proper notation.

    cout<<"Select a subscription package:"<< endl;
    cout<<"1. Package A"<< endl;
    cout<<"2. Package B"<< endl;
    cout<<"3. Package C"<< endl;
    cout<<"4. Quit\n"<< endl;
    cin>> input;
    //displays package options
    switch(input)
  {
    case 1: cout<<"PACKAGE A:\n============"<<endl;
            cout<<"How many hours were used? ";
            cin>> hours;
            cout<<"Package A: $9.95 per month 10 hours of access are provided.\nAdditional are $2.00 per hour. Usage quota not to exceed 800 hours"<<endl;
            perMonth = 9.95;
            //sets monthly package cost
            hours -= 10;
            //subtracts first amount of hours for deal
            cost = 9.95 + (hours * 2.00);
            //calculates cost by adding monthly cost with hours  times 2 because hours cost after 10 is 2.00 per hour
            cout<<"The total amount due is $"<< cost <<endl;
            //displays proper package deal. returns cost.
              break;
    case 2: cout<<"PACKAGE B:\n============"<<endl;
            cout<<"How many hours were used? ";
            cin>> hours;
            cout<<"Package B: $14.95 per month 20 hours of access are provided.\nAdditional are $1.00 per hour. Usage quota not to exceed 800 hours"<<endl;
            perMonth = 14.95;
            //sets monthly package cost
            hours -= 20;
            //subtracts first amount of hours for deal
            cost = 14.95 + hours;
            //calculates cost by adding monthly package cost with hours.
            cout<<"The total amount due is $"<< cost <<endl;
            //displays proper package deal. returns cost.
              break;
    case 3: cout<<"PACKAGE C:\n============"<<endl;
            cout<<"How many hours were used? ";
            cin>> hours;
            cout<<"Package C: $19.95 per month,a flat rate.\nUsage quota not to exceed 800 hours"<<endl;
            perMonth = 19.95;
            cout<<"The total amount due is $"<< perMonth <<endl;
            //returns cost which will not change because it will always be 19.95. flat rate
            break;
    case 4:
              break;
    default: cout<<"The valid choices are 1 through 4.\nRun the program again and select one of those. "<<endl;
    // if invalid input is input then gives error message
    break;
    }
return 0;
}
