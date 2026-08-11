#include <iostream>
using namespace std;

int main()
{
    
    // Write a program that takes an integer and determines whether it is even or odd.

    int number;
    cout << "Enter number :";
    cin >> number;

    if (number % 2 == 0 ){
        cout << "Even number ";
    }
    else {
        cout << "Odd number";
    }
    
    
    return 0;
    
}