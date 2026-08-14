// switch statement practice 

#include <iostream>
using namespace std;

int main()
{
    
    int num1 , num2;
    cout << "Enter num1 :";
    cin >> num1;
    cout << "Enter num2 :";
    cin >> num2;


    char operators;
    cout << "Enter operation to perform : ";
    cin >> operators;


    
    switch (operators){

        case '+' : cout << "Addition : " << (num1 + num2);
            break;
        case '-' : cout << "Subtraction : " << (num1 - num2);
            break;
        case '/' : cout << "Division : " << (num1 / num2);
            break;
        case '*' : cout << "Multiplication : " << (num1 * num2);
            break;


    }

    
    
    return 0;
    
}