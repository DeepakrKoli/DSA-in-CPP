#include <iostream>
using namespace std;

void Change(int a , char ch , string name) {

    cout <<a <<endl;
    cout <<ch <<endl;
    cout << name <<endl;
    a++;
    ch++;
    name = "Swaraj";
    cout <<a <<endl;
    cout <<ch <<endl;
    cout << name << endl;

}

int main()
{
    
    // Pass by Value 

    int a = 5;
    char ch = 'A';
    string name = "Deepak";

    cout << a <<endl;
    cout << ch <<endl;
    cout << name <<endl;

    Change(a , ch , name);
    cout << a <<endl;
    cout << ch <<endl;
    cout << name <<endl;


    
    
    return 0;
    
}