#include <iostream>
using namespace std;

int main()
{
    
    
    int marks [5];
    
    
    
    // Taking input in an Array 
        for(int j = 0 ; j <=4 ; j++){
            
            cout << "Enter value for marks["<<j<<"]:";
            cin >> marks[j];
    
        }
    // Printing the array values 

        for(int i = 0 ; i <= 4 ; i++){

            cout <<marks[i] <<" ";

        }


    
    
    
    return 0;
    
}