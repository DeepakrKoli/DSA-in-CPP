#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    
    // Using built-in Library functions 

    // to copy one char array into another
    char arr1[] = "Deepak";
    char copyarr1[20];

    strcpy(copyarr1 , arr1);

    cout <<copyarr1 <<endl;

    // get the length of char array

    cout << strlen(arr1);

    
    
    return 0;
    
}