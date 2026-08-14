#include <iostream>
using namespace std;

void Manipulate(int &a , char &ch , string &name){

    a++;
    ch++;
    name = "Swaraj";
}

int main() {

    // Pass by Reference 

    int a = 5;
    char ch = 'A';
    string name = "Deepak";

    cout << a <<endl;
    cout << ch <<endl;
    cout << name <<endl;

    Manipulate( a , ch , name);

    cout <<a <<endl;
    cout << ch <<endl;
    cout << name <<endl;






    return 0;
}