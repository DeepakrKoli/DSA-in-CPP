#include <iostream>
using namespace std;

int main()
{
    
    // do while loop

    int i = 1;

    do{
        cout << i << " ";
        i ++;
    }while ( i <= 10);

    cout << endl;

    int j = 10;

    do {

        cout << j << " "; // this code will run atleast once even if condition is false 
    
        j ++;

    }while(j < 10);

    
    
    

    
    
    return 0;
    
}