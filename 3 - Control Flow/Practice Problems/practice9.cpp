// check if number divisible by 5 or not 

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter num :";
    cin >> num;

    if ( num % 5 == 0){
        cout << num << " is divisible by 5 ";
    }
    else {
        cout << num << " not divisible by 5";
    }
    
    
    
    
    return 0;
    
}