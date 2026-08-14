#include <iostream>
using namespace std;

int main()
{
    
    // break keyword

    for(int i = 1 ; i <= 10 ; i = i + 1){

        cout << i << " ";
        
    }
    cout <<endl;

    for(int i = 1 ; i <=10; i ++){

        cout <<i << " ";
        if(i == 5){
            break;
        }

    }

    cout << endl;

    for(int i = 1 ; i <=10 ; i++){

        if(i == 5){
            break;
        }
        cout <<i<<" ";

    }

    
    
    return 0;
    
}