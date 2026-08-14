#include <iostream>
using namespace std;

int main()
{
    
    // if else if else statement 

    int marks;
    cout << "Enter marks :";
    cin >> marks;
    
    if (marks >= 90){
        cout << "A";
    }
    else if (marks >=80){
        cout << "B";
    }
    
    else if (marks >=70){
        cout << "C";
    }
    
    else if (marks >=60){
        cout << "D";
    }
    
    else if (marks >=35){
        cout << "E";
    }
    else {
        cout << "You failed";
    }

    
    return 0;
    
}