#include <iostream>
using namespace std;

int main()
{
    
    
    int *ptr = new int; // dynamic memory is allocated 

    cout <<ptr <<endl; // address inside the heap memory which we are allocated 

    *ptr = 200; // storing this value inside the heap memory 

    cout << *ptr <<endl;


    // Memory deallocation 

    delete ptr;
    ptr = nullptr;

    cout <<ptr;





    
    
    return 0;
    
}