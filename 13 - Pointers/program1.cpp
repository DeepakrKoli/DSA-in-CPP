#include <iostream>
using namespace std;

int main()
{
    
    int num = 50;
    int *ptr = &num;

    cout << num <<endl;
    cout << &num <<endl;
    cout << ptr << endl;
    cout << &ptr <<endl;
    cout << *ptr << endl; // accessing the value present at address store in ptr 

    *ptr = 100; // modifying the value 
    cout << num <<endl;


    // creating a null pointer 

    int *p = NULL;

    cout << p <<endl;
    cout << *p <<endl;




    
    
    return 0;
    
}