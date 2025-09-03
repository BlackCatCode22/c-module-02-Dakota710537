//funWithFunctions.cpp
//dF 9/3/25


#include <iostream>
#include <algorithm>
#include <string>


using namespace std;

//getAnIntFromTheUser()
//input: The Users name
//processing: ask the user for an integer value
//output: the user's number
int getAnIntFromTheUser(string userName) {
//prompt a user for a number(a whole number aka an int)
    int anIntFromTheUser;

    cout << "\n Hello, " + userName + ", please enter a whole number: ";
    cin >> anIntFromTheUser;

    return anIntFromTheUser;
}

int main() {
    cout << "\n Welcome to Fun With Functions! \n";

    //variables needed
    //i need a variable to hold the users name
string userName;
//get an int from the user by calling
    int aRandomNumber = 0;

    cout << "\n Enter your name: ";
    cin >> userName;
    cout << "\n userName is: "<< userName << "\n";

    //call (invoke) the function named getAnIntFromTheUser() with a string argument
    aRandomNumber = getAnIntFromTheUser(userName);
    cout << "\n\n" + userName + " entered: " << aRandomNumber << "\n";


    return 0;
}