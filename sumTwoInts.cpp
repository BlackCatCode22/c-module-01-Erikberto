// sumTwoInts.cpp
// eS 1/20/25
// CIT-66

#include <iostream>
using namespace std;

int main() {
    cout <<"Please enter two numbers to add them up, separated them, then press 'Enter'";

    int a;
    int b;
    cin >> a >> b;
    int add = a + b;
    cout << "You entered: " << a << "+" << b ;
    cout << "\nThe sum of the two numbers is: " << add;

    return 0;
}