#include <iostream>
using namespace std;

int main()
{
    
    // Logical Operators 

    cout << (( 10 > 5) && ( 10 == 4) && (10 < 100)) <<endl; // 0 
    cout << (( 10 > 5) && ( 10 == 10) && (10 < 100)) <<endl; // 1
    cout << (( 10 > 5) || ( 10 == 4)  || (10 < 6)) <<endl; // 1
    cout << (( 10 < 5) || ( 10 == 4) || (10 < 10)) <<endl; // 0 
    cout << !(( 10 < 5) || ( 10 == 4) || (10 < 10)) <<endl; // 1 
 
 
    
    
    return 0;
    
}