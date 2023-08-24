//3.5 - Long-Distance Calls
//xander maniaci
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int startTime, callLength;
    double grossCost, netCost;
    //creates two int and double values

    cout<< setprecision(2)<< fixed << showpoint <<endl;
    //needed to display dollar amount properly. to the second decimal shows zeros and displays in proper notation

    cout<<"Enter start time: ";
    cin>>startTime;
    cout<<"Enter length of call in minutes: ";
    cin>>callLength;
    //prompts user for start time and call length

     if (startTime >= 1800 || startTime <= 800){
    //checks to see if call falls between 6:00pm and 8:00am
        grossCost = callLength * .35;
    //sets gross cost by multiplying call length by .35(cost per minute)
        netCost = grossCost * .50;
    //sets net cost to gross cost and calculates 50% discount.

        cout<<"gross cost: $"<< grossCost<<endl;
    // returns gross cost
        if( callLength > 60){
                netCost *= .84;
                netCost *= 1.04;
        }else{
        netCost *=1.04;
        }
        //checks to see if call length is over 60 m and calculates discount. if not calculates tax only
       cout<<"net cost: $"<< netCost <<endl;
    //returns net cost
     }else{

     grossCost = callLength * .35;
     netCost = grossCost;
     //same as first if statement but does not add on 50% discount.
     cout<<"gross cost: $"<< grossCost<<endl;
     if( callLength > 60){
                netCost *= .84;
                netCost *= 1.04;
        }else{
        netCost *=1.04;
        }
        //checks to see if call length is over 60 m and calculates discount. if not calculates tax only
       cout<<"net cost: $"<< netCost <<endl;
       // return net cost
    }

   return 0;
}
