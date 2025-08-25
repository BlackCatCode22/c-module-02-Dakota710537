#include <iostream>
using namespace std;

int main() {
    //Create a string object named myStrObject
string myStrObject = "abcdefghi";
//Output my string object
cout << "\n The value of my string object is: " << myStrObject << endl;

    //Use method from string library to find its length
    cout << "\n The length of myStrObject is: " << myStrObject.length() << endl;

    // Create a variable that holds the length of our string
    int lengthOfMyStrObject = 0;

    lengthOfMyStrObject = myStrObject.length();
    cout << "\n The value of my myStrObject is: " << lengthOfMyStrObject << endl;

    return 0;
}