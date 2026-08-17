#include <iostream> // cin , cout 
#include <algorithm> // min() , max()
#include<cmath> // fmin() , fmax()
using namespace std;

int main(){


    int x , y;
    cout << "Enter x :";
    cin >>x;
    cout << "Enter y :";
    cin >>y;

    float a , b;
    cout << "Enter a :";
    cin >>a;
    cout << "Enter b :";
    cin >>b;

    // some inbuilt functions posible because of <algorithm>  
    int maxNumber = max(x, y);  // returns max number from given input 
    int minNumber = min(x, y); // returns min number from given input

    // some inbuilt math functions possible because of <cmath>
    float fmaxNumber = fmax(a,b);
    float fminNumber = fmin(a,b);

    cout << "max number :"<< maxNumber <<endl;
    cout << "min number :" << minNumber <<endl;
    cout << "fmax number :"<< fmaxNumber <<endl;
    cout << "fmin number :" << fminNumber <<endl;


    return 0;
}