#include <iostream>
using namespace std;

int main()
{
    
    // variable declaration rules 

    int num = 10;

    {
        int num = 20;
        cout << num << endl;
    }

    {
        int num = 25;
        cout << num << endl;
    }


    cout << num <<endl;
    
    
    return 0;
    
}