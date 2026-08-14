#include <iostream>
using namespace std;

void reverseArrayElements (int arr[] , int length){

    for(int i = length - 1 ; i >=0 ; i--){

        cout << arr[i] << " ";

    }

}

int main()
{
    
    // Write a function to reverse the elements of array

    int arr[5];
    int length = sizeof(arr)/ sizeof(arr[0]);

    for(int i = 0 ; i <= length - 1 ; i ++){

        cin >>arr[i];
    }

    reverseArrayElements(arr , length);


    
    
    
    return 0;
    
}