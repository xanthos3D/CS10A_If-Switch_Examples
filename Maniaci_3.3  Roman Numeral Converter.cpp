
//xander maniaci
//3.3

#include<iostream>

using namespace std;

int main ()
{
    int input = 0;
    // create int variables
    cout<<" Enter a number (1 - 10): ";
    cin>> input;
    // prompts user for input

    switch(input)
  {
    case 1: cout<<"The Roman numeral version of "<< input <<" is I."<<endl;
              break;
    case 2: cout<<"The Roman numeral version of "<< input <<" is II."<<endl;
              break;
    case 3: cout<<"The Roman numeral version of "<< input <<" is III."<<endl;
              break;
    case 4: cout<<"The Roman numeral version of "<< input <<" is IV."<<endl;
              break;
    case 5: cout<<"The Roman numeral version of "<< input <<" is V."<<endl;
              break;
    case 6: cout<<"The Roman numeral version of "<< input <<" is VI."<<endl;
              break;
    case 7: cout<<"The Roman numeral version of "<< input <<" is VII."<<endl;
              break;
    case 8: cout<<"The Roman numeral version of "<< input <<" is VIII."<<endl;
              break;
    case 9: cout<<"The Roman numeral version of "<< input <<" is IX."<<endl;
              break;
    case 10: cout<<"The Roman numeral version of "<< input <<" is X."<<endl;
              break;
    default: cout<<"Enter a number in the range 1 through 10."<<endl;
    break;
    }
// gives response based on what number was entered. default gives error message if improper number was input.
return 0;
}
