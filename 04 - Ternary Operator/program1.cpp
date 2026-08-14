#include <iostream>
using namespace std;

int main()
{
    
    // check can vote or not 

    int age;
    cout << "Enter age :";
    cin >> age;

    (age >= 18) ? cout << "Can Vote" : cout << "Can't Vote";
    
    
    return 0;
    
}