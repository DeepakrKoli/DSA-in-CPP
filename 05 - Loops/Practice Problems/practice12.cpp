// Take a number n and calculate the sum of all odd numbers from 1 to n using do while loop
#include <iostream>
using namespace std;

int main()
{
    
    int i = 1;
    int sum = 0;
    int n;
    cout << "Enter n :";
    cin >>n;

    do {
        if( i % 2 != 0){
            sum = sum + i;
        }
        i++;
    }while(i <= n);

    cout << "Sum of odd number's : " <<sum;
    
    
    return 0;
    
}