#include <iostream>
using namespace std;

void printEven (int arr[] , int size , int &count ){

    for(int i = 0 ; i <  size ; i ++){

        if(arr[i] % 2 == 0){
            count ++;
        }

    }


}

int main()
{
    
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int count = 0;

    printEven(arr , size , count);

    cout << count <<endl;

    
    
    
    return 0;
    
}