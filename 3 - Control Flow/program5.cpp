#include <iostream>
using namespace std;

int main()
{
    
    // Nested 

    float height;
    float weight;

    cout << "Enter your height in feet :";
    cin >> height;
    cout << "Enter your weight in kg :";
    cin >> weight;

    if ( height >= 5 ){
        
        if (weight >= 60){
            cout << "You are healthy";
        }
        else {
            cout << "You are not healthy";
        }
    }
    else {
        cout << "Should i buy you a complan ";
    }
    
    
    return 0;
    
}