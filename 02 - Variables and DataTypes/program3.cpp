#include <iostream>
using namespace std;

int main()
{
    
    // sizeof operator 

    int age = 22; // 4 
    float pi = 3.14; // 4 
    char alphabet = 'A'; // 1
    bool isMale = true; // 1
    double salary = 21.12333; // 8 


    cout << sizeof (age) << endl;
    cout << sizeof (pi) << endl;
    cout << sizeof (alphabet) << endl;
    cout << sizeof (isMale) << endl;
    cout << sizeof (salary) << endl;

    
    
    
    return 0;
    
}