#include <iostream>
using namespace std;


void compareArrays( char arr1[] , char arr2[]){


    int i = 0;
    bool isTrue = true;
    while (arr1[i] != '\0' or arr2[i] != '\0')
    {
        
        if(arr1[i] != arr2[i]){
            
            cout << "Both Arrays are not equal";
            isTrue = false;
            break;

        }
        else {
            i++;
        }
    }

    if(isTrue){
        cout << "Both Arrays are equal";
    }


}


int main()
{
    
    // Comparison between two character Arrays 

    char arr1[20] = "Deepako";
    char arr2[20] = "Deepako";

    compareArrays(arr1 , arr2);


    
    
    return 0;
    
}