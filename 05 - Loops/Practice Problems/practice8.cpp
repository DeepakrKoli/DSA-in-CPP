// Write a C++ program that takes a number n from the user and calculates the sum of all numbers from 1 to n using a while loop.

#include <iostream>
using namespace std;

int main()
{
    
    int number;
    cout << "Enter number :";
    cin >> number;

    int sum = 0;

    int i = 1;

    while ( i <= number){

        sum = sum + i;

        i++;


    }
    cout << "sum :" <<sum;
    
    
    return 0;
    
}