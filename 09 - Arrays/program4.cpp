#include <iostream>
using namespace std;

int main()
{
    
    // 2D Array 

    int arr [2] [4] = {{1,2,3,4} , {5,6,7,8}};

    cout<< arr[0][3] <<endl; // 4
    cout<< arr[1][3] <<endl; // 8 

    for(int i = 0 ; i < 2 ; i++){


        for(int j = 0 ; j < 4 ; j++){
            cout << arr[i][j] << " ";
        }
        cout <<endl;

    }



    
    
    return 0;
    
}