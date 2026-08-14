#include <iostream>
using namespace std;

void Flip(int arr[] , int length){

    for(int i = 0 ; i <= length -1 ; i++){

        if(arr[i] == 0){
            arr[i] = 1;
        }
        else{
            arr[i] = 0;
        }

    }

}

int main()
{
    
    // Flip the array value 0 to 1 and 1 to 0

    int arr[5];
    int length = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0 ; i <= length-1 ; i++){
        
        cin >> arr[i];
    }

     Flip(arr , length);
     for(int i = 0 ; i <= length-1 ; i++){

        cout << arr[i] <<" ";

     }

    
    
    return 0;
    
}