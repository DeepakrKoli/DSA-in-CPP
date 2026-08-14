// Take a number n from the user and print all numbers from 1 to n that are divisible by 3 using do while loop .

#include <iostream>
using namespace std;

int main()
{
    
    int n;
    cout << "Enter n :";
    cin >>n;

    int i = 1;
    do {

        if( i % 3 == 0){

            cout <<i << " ";

        }
        i++;
    }
    while (i <= n);
    
    
    return 0;
    
}