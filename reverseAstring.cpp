//reverseAstring.cpp
//dF 8/25/25

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;


int main() {
    cout << "\n\n Welcome to My String Reverse program!\n\n";

string myStrToReverse = "A long String to Reverse";
      cout << "\n The string before being reversed is: " << myStrToReverse;
reverse( myStrToReverse.begin(), myStrToReverse.end() );
     cout << "\n My reversed String is: " << myStrToReverse ;
    

    //pt 2
    //Use a for loop to swap characters
    for( int i = 0; i < 10; i++) {
        cout << "\n The value of the i is: " << i << "\n";
    }


    //Create a string object
    string myStr01 = "   this is a literal string   ";

    //Find the length method
    int strlength = 0;

    strlength = myStr01.length();
    // Output the length of the string:
    cout << "\n The length of myStr01 is: " << strlength;


//output the string objects value
cout << "\n\n myStr01 is: " << myStr01 << "\n\n";

    string myTrimmedStr = trim(myStr01);
    //find the string objects length
    cout << "\n Length is: " << myTrimmedStr.length() << "\n\n";

    cout << "\n The trim string is: " << myTrimmedStr << "\n\n";



    return 0;
}
