#include <iostream>
using namespace std;

int main()
{
    
    // Take input in 2D Array 

    int arr [3][4];
    
    int row_length = 3;
    int col_length = 4;

    for(int i = 0 ; i < row_length ; i++){


        for(int j = 0 ; j < col_length ; j++){

            cout << "Enter value of arr["<<i<<"]["<<j<<"] : ";
            cin >> arr[i][j]; 

        }
        cout <<endl;

    }

    for(int i = 0 ; i < row_length ; i++){

        for(int j = 0 ; j < col_length ; j++){

            cout << arr[i][j] << " "; 

        }
        cout <<endl;


    }

    
    
    return 0;
    
}