#include <iostream>
using namespace std;

void print2DArray (int arr[][4] , int row , int col) {


    for(int i = 0 ; i < row ; i++){
        for(int j = 0; j <col ;  j++){

            cout <<arr[i][j] << " ";
        }
        cout <<endl;
    }


}

int main()
{
    
    // Take input in 2D Array and pass it to the function to print it

    int arr [3][4];
    int row = 3;
    int col = 4;

    for(int i = 0 ; i < row ; i++){

        for(int j = 0 ; j < col ; j++){

            cout << "Enter value in arr["<<i<<"]"<<"["<<j<<"] :";
            cin >> arr[i][j];

        }
        cout <<endl;

    }

    print2DArray(arr , row , col);



    
    
    
    return 0;
    
}