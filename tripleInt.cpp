// tripleInt.cpp
// eS 1/20/25
// CIT-66
#include <iostream>
using namespace std;

int main() {
    int userInput =0;
    int tripleInput =0;

    cout << "Please enter a whole number and then press 'Enter'";
    cin >> userInput;

    tripleInput = userInput * 3;

    cout << " You entered:" << userInput <<'\n' << "Thank you!";

    cout << " Your triple number is: \n" << tripleInput;

    return 0;
}