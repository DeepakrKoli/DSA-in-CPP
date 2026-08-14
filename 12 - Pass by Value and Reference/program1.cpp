#include <iostream>
using namespace std;

int main()
{
    

    int a = 20;
    int b = a;
    b++;

    cout << a << " ";
    cout << b << " ";

    cout <<endl;

    // Reference Variable

    int x = 20;
    int &y = x;

    y++;

    cout << x << " ";
    cout << y << " ";
    
    
    return 0;
    
}