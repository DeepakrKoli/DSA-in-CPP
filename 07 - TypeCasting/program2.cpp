#include <iostream>
using namespace std;

int main()
{
    
    // Type Casting : Explicit Type Casting 

    int a = 10;
    float b = 5.5;


    cout << a + b <<endl; // implicit int to float conversion 
    cout << a + (int)b <<endl; // explicit float to int conversion 
    cout << (char)( 64 + 1)<<endl; // explicit int to char conversion 

    // double to int conversion

    double pi = 3.14565463;
    double result = (int)pi; // explicit double to int conversion 
    cout << result <<endl;

    // double to char 

    double xnum = 66.56465;

    cout << (char) xnum<<endl;

    //  explicitly int to float conversion 

    int unum = 30;
    int unum2 = 4;
    float resultx = ((float)unum/unum2);

    cout << resultx;
    
    
    return 0;
    
}