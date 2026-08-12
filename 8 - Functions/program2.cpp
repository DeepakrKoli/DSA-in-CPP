#include <iostream>
using namespace std;


// Void Function's 

void AddNumber () {

    int a , b;
    cout << "Enter a :";
    cin >> a;
    cout << "Enter b :";
    cin >>b;

    int sum = a + b;
    cout << sum <<endl;

}

void sayHello (){
    cout << "My name is Deepak Koli"<<endl;
}

void Multiply (int a , int b ){

    int multiply = a * b;
    cout << multiply ;
}


int main()
{

    AddNumber();
    sayHello();
    Multiply(12,3);

    
    
    return 0;
    
}