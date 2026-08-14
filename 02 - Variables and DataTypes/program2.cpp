#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    // Different data types 

    int num = 1234;
    float pi = 3.14;
    double salary = 31.332342424;
    char alphabet = 'A';
    bool isMale = true;
    bool isFemale = false;
    bool isAdult = 1;
    bool isMinor = 0;

    cout << num << endl;
    cout << pi << endl;
    cout << setprecision(11) << salary << endl;
    cout << alphabet << endl;
    cout << isMale << endl;
    cout << isFemale << endl;
    cout << isAdult << endl;
    cout << isMinor << endl;
    
    
    return 0;
    
}