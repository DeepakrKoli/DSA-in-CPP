#include <iostream>
using namespace std;

// Write a function to give multiplication of 3 number's

int getMultiplication ( int x , int y , int z ){

    int mul = x * y * z;
    return mul;
}

int main()
{
    
    int a , b , c;
    cout << "Enter a :";
    cin >>a;
    cout << "Enter b :";
    cin >>b;
    cout << "Enter c :";
    cin >>c;
    int ans = getMultiplication (a,b,c);

    cout <<"Multiplication  : " <<ans;

    
    
    
    return 0;
    
}