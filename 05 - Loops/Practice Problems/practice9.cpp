// Write a C++ program that prints all the even numbers from 1 to n using a for loop.

#include <iostream>
using namespace std;

int main()
{
    
    int n;
    cout << "Enter n : ";
    cin >> n;

    for(int i = 1 ; i <= n ; i++){

        if( i % 2 == 0){
            cout <<i << " ";
        }
        

    }
    
    
    return 0;
    
}