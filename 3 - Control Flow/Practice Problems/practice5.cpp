
// Take marks as input and print the grade according to the following conditions:

// 90–100 → A
// 80–89  → B
// 70–79  → C
// 60–69  → D
// Below 60 → F


#include <iostream>
using namespace std;

int main()
{
    
    int marks;
    cout << "Enter marks :";
    cin >> marks;

    if (marks >= 90 and marks <=100){
        cout << "A";
    }
    else if (marks >= 80){
        cout << "B";
    }
     
    else if (marks >= 70){
        cout << "C";
    }
    
    else if (marks >= 60){
        cout << "D";
    }
    else {
        cout << "F";
    }
    
    return 0;
    
}