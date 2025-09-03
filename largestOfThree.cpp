   #include <iostream>
using namespace std;

int main() {
    cout << "Hello and Welcome to my Largest of Three Ints Program. \n";

    //Declare all variables needed

    int num1;
    int num2;
    int num3;

    //Initialize all my variables
    //Assign a zero value to variables


    //Get three ints from the user
    //Get num1
    cout <<"\n Please enter a value for num1:";
    cin >> num1;
    cout <<"\n You entered " << num1 << " for num1";

    cout <<"\n Please enter a value for num2:";
    cin >> num2;
    cout <<"\n You entered " << num2 << " for num2";

    cout <<"\n Please enter a value for num3:";
    cin >> num3;
    cout <<"\n You entered " << num3 << " for num3";

    if (num1 > num2) {
        if (num1 > num3) {
            cout <<"\n The Greatest of the three is " << num1;
        }else {
            cout <<"\n The Greatest of the three is " << num3;
        }
    }else if (num2 > num3) {
        cout <<"\n The Greatest of the three is " << num2;
    }else {
        cout <<"\n The Greatest of the three is " << num3;
    }


    return 0;
}