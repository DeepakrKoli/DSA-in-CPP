
// Take three integers as input and find the largest number using conditional statements.

#include <iostream>
using namespace std;

int main()
{
    
    int num1 , num2 , num3;
    cout << "Enter num1 :";
    cin >> num1;
    cout << "Enter num2 :";
    cin >> num2;
    cout << "Enter num3 :";
    cin >> num3;

    if( num1 > num2){
        
        if( num1 > num3){
            cout << num1 << " is greater among all";
        }
        else {
            cout << num3 << " is greater among all";
        }
    }
    else if (num2 > num3){

            cout << num2 << " is greater among all";
        

    }
    else {
        cout << num3 << " is greater among all";
    }
    
    
    return 0;
    
}