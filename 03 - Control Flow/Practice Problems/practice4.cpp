// Take two integers as input and print which number is greater. If both numbers are equal, print "Both are equal".

#include <iostream>
using namespace std;

int main()
{
    
    int num1 , num2;

    cout << "Enter num1 :";
    cin >> num1;
    cout << "Enter num2 :";
    cin >> num2;

    if ( num1 == num2) {
        cout << "both number's are equal";
    }
    else if (num1 > num2) {

        cout << num1<< " is greater";
    }
    else {
        cout << num2<< " is greater";

    }    
    
    return 0;
    
}