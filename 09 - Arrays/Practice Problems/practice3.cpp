#include <iostream>
#include <cstring>
using namespace std;

// Initializing all elements of array with -1 

int main()
{
    
    // initialize all elements of an array with -1
    int arr[5];
    int length = sizeof(arr) / sizeof(arr[0]);

    memset(arr , -1 , sizeof(arr)); // function we get from cstring header file 
    
    for(int i = 0 ; i <= length-1 ; i++ ){

        cout <<arr[i] << " ";


    }
    
    
    return 0;
    
}