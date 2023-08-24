//xander maniaci
//3.2 Telephone buttons
#include<iostream>
#include<cstdlib>

using namespace std;

int main (){
//declares variable letter
char letter;

//prompts user for char variable
cout<<"Enter a single letter, and I will tell you what the corresponding digit is on the telephone."<<endl;
cin>>letter;
// long if/else if statement to determine user input
if(letter == 'A' || letter == 'B' || letter == 'C'){
   cout<< "The digit 2 corresponds to the letter "<< letter <<" on the telephone."<<endl;

}else if(letter == 'A' || letter == 'B' || letter == 'C'){

   cout<< "The digit 2 corresponds to the letter "<< letter <<" on the telephone."<<endl;

}else if(letter == 'D' || letter == 'E' || letter == 'F'){

   cout<< "The digit 3 corresponds to the letter "<< letter <<" on the telephone."<<endl;

}else if(letter == 'G' || letter == 'H' || letter == 'I'){

   cout<< "The digit 4 corresponds to the letter "<< letter <<" on the telephone."<<endl;

}else if(letter == 'J' || letter == 'K' || letter == 'L'){

   cout<< "The digit 5 corresponds to the letter "<< letter <<" on the telephone."<<endl;

}else if(letter == 'M' || letter == 'N' || letter == 'O'){

   cout<< "The digit 6 corresponds to the letter "<< letter <<" on the telephone."<<endl;

}else if(letter == 'P' || letter == 'R' || letter == 'S'){

   cout<< "The digit 7 corresponds to the letter "<< letter <<" on the telephone."<<endl;

}else if(letter == 'T' || letter == 'U' || letter == 'V'){

   cout<< "The digit 8 corresponds to the letter "<< letter <<" on the telephone."<<endl;

}else if(letter == 'W' || letter == 'X' || letter == 'Y'){

   cout<< "The digit 9 corresponds to the letter "<< letter <<" on the telephone."<<endl;
}else if(letter == 'Q' || letter == 'Z' || letter <= 1 && letter >= 64 || letter <= 97 && letter <= 122 || letter < 122 && letter >= 127){

/*originally i started out with a really long if statement to check for lowercase characters
 but realized that it could also be achieved by looking up the aski chart
and making a range based on what number matches with the lowercase characters.
i realize now after the fact that this program probably would have been way shorter had i done this using ranges based on what number each letter stands for.
else if(letter == 'Q' || letter == 'Z' || letter == 'a' || letter == 'b' || letter == 'c' || letter == 'd' || letter == 'e' || letter == 'f' || letter == 'g' || letter == 'h' || letter == 'i' || letter == 'j' || letter == 'k' || letter == 'l' || letter == 'm' || letter == 'n' || letter == 'o' || letter == 'p' || letter == 'q' || letter == 'r' || letter == 's' || letter == 't' || letter == 'u' || letter == 'v' || letter == 'w' || letter == 'x' || letter == 'y' || letter == 'z'){

*/
cout<<"There is no digit on the telephone that corresponds to "<< letter <<endl;
}else if (!cin){
// was not sure if needed but check to make sure char variable was input.
cout<<"Invalid input."<<endl;
}

return 0;
}
