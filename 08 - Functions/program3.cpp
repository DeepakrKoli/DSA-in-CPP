#include <iostream>
using namespace std;

// function declaration 
void Hello();
int numberSum ( int x , int y );


int main()
{
    
    
    Hello ();
    cout << numberSum(12,8);
    return 0;
    
}    

// function definition 

void Hello () {

    cout << "Hello World !" <<endl;
}

int numberSum (int x , int y ) {

    return x+y;
}
