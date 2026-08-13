#include <iostream>
using namespace std;


int main() {

    // Printing sum of array elements  

    int numarr [5];
    int sumOfArray = 0;

    for(int i = 0 ; i <=4; i++){

        cin >> numarr[i];
        sumOfArray += numarr[i];
    }
    cout << "Sum of Array elements : " << sumOfArray;



    return 0;
}