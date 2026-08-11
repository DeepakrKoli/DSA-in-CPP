#include <iostream>
using namespace std;

int main()
{
    

    // store number in result which is greater 

    int x , y;
    cout << "Enter x :";
    cin >>x;
    cout << "Enter y :";
    cin >> y;

    int result = (x > y) ? x : y;

    cout << "Result : " <<result;
    
    
    return 0;
    
}