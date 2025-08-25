//reverseAstring.cpp
//dF 8/25/25

#include <iostream>
#include <string>
#include <algorithm>
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

    return 0;
}
