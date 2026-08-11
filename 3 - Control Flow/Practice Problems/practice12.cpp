// switch statement : Displaying range of marks by grades

#include <iostream>
using namespace std;

int main()
{
    
    char grade;
    cout << "Enter grade :";
    cin >> grade;

    switch (grade){


        case 'A' : cout << "Range 90 to 100";
            break;

        case 'B' : cout << "Range 80 to 89";
            break;
            
        case 'C' : cout << "Range 70 to 79";
            break;
            
        case 'D' : cout << "Range 60 to 69 ";
            break;

        case 'E' : cout << "Range 35 to 59 ";
            break;
            
        case 'F' : cout << "Range 0 to 34";
            break;

        default : cout << "Enter valid Grade";


    }
    
    
    return 0;
    
}