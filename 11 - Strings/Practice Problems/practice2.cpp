#include <iostream>
using namespace std;

int main()
{
    
    // Check for Palindrome 

    string name;
    cout << "Enter the string : ";
    cin >> name;
    string reverse;

    for(int i = name.length() - 1 ; i >= 0 ; i--){

        reverse +=name[i];
    }

    if(name == reverse){
        cout << "Given string is palindrome";
    }
    else {
        cout << "Given string is not palindrome";
    }
    
    
    return 0;
    
}