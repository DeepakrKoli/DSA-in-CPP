#include <iostream>
using namespace std;

int main()
{
    // Multiple Pointers

    int a = 5;
    int* ptr = &a;
    int** ctr = &ptr;
    int*** dtr = &ctr;

    cout << a << endl;      // Value of a (5)

    cout << &a << endl;     // Address of a

    cout << ptr << endl;    // Address of a (stored in ptr)

    cout << &ptr << endl;   // Address of ptr

    cout << *ptr << endl;   // Value stored at the address held by ptr (5)

    cout << ctr << endl;    // Address of ptr (stored in ctr)

    cout << &ctr << endl;   // Address of ctr

    cout << *ctr << endl;   // Value stored in ptr (address of a)

    cout << **ctr << endl;  // Value stored at the address held by ptr (5)

    cout << dtr << endl;    // Address of ctr (stored in dtr)

    cout << &dtr << endl;   // Address of dtr

    cout << *dtr << endl;   // Value stored in ctr (address of ptr)

    cout << **dtr << endl;  // Value stored in ptr (address of a)

    cout << ***dtr << endl; // Value stored at the address held by ptr (5)

    return 0;
}