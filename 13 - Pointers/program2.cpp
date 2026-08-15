#include <iostream>
using namespace std;


void sizeofArray(int arr[]){

    cout <<sizeof(arr);

}

int main()
{
    
    int arr [] = {1,2,3,4};

    cout << sizeof(arr) <<endl;

     sizeofArray(arr);
    
    
    return 0;
    
}