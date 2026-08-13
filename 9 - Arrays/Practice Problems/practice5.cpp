#include <iostream>
using namespace std;

// function to store table of 10 in the array given

void tableOfTen (int arr[] , int lenght){

    int count = 1;
    for(int i = 0 ; i <= lenght - 1 ; i++){

        arr[i] = 10 * count;
        count ++;

    }
}

void printTable (int arr[],int length){
    
    for(int i = 0 ; i <= length-1 ; i++){

        cout << arr[i] << endl;
    }
    
}

int main()
{

    int arr[10];
    int lenght = sizeof(arr) / sizeof(arr[0]);

    tableOfTen(arr , lenght);
    printTable(arr , lenght);

    
    
    
    
    return 0;
    
}