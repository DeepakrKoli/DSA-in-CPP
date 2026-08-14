#include <iostream>
using namespace std;

// Printing sum of array elements using function 

int sumofNumbers (int arr[] , int size ){

    int sum = 0;
    for (int i = 0 ; i<= size -1 ; i++){
        sum += arr[i];
    }

    return sum;


}

int main()
{
    
    // take input in array 

    int numbers [5];

    for(int i = 0 ; i <= 4 ; i++){

        cin >>numbers[i];
    
    }

    // this stores the sum of array 

   int result =  sumofNumbers(numbers , 5);

   cout << "Sum of entered Array : " << result;

    
    
    return 0;
    
}