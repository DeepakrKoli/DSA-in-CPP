// Write a function to display if number is even or oddd
#include <iostream>
using namespace std;

void checkNumber(int num){

    if(num % 2 == 0){
        cout << "Even Number !";
    }
    else {
        cout << "Odd Number !";
    }

}

int main()
{
    
    int number;
    cout << "Enter number :";
    cin >> number;

    checkNumber(number);
    

    
    
    return 0;
    
}