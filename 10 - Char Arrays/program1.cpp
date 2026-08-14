#include <iostream>
using namespace std;

int main()
{
    
    // declaration 
    char arr1 [4];
    arr1[0] = 'A';
    arr1[1] = 'B';
    arr1[2] = 'C';
    arr1[3] = 'D';

    cout << arr1[0] << " ";
    cout << arr1[1] << " ";
    cout << arr1[2] << " ";
    cout << arr1[3] << " ";
    cout <<endl;


    // initialization

    char arr2[] = "Love"; // null character is automatically initialize here at end 
    cout <<arr2<<endl; 
    int nullpointervalue = arr2[4];
    int charactervaluerandom = arr2[0];
    cout << nullpointervalue <<endl;
    cout << charactervaluerandom<<endl;

    // looping an character array 

    char arr3 [5];

    // taking input 
    for(int i = 0 ; i < 5; i++){

        cin >> arr3[i];
    }
    // display output 

    for(int i = 0 ; i < 5 ; i++){
        cout << arr3[i] << " ";
    }
    




    
    
    return 0;
    
}