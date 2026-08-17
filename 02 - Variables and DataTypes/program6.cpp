#include <iostream>
using namespace std;


int main(){

    // Some more data types to store integers 

    long x = 1234333;
    long long bigdata = 1325266737328239;

    cout << x << endl;
    cout << sizeof(x) <<endl; // 4 
    cout << bigdata << endl;
    cout << sizeof(bigdata) <<endl; // 8

    // some more data types to store decimal values 

    long double bigDecimal = 123.628736823; 

    cout << bigDecimal << endl;
    cout << sizeof(bigDecimal); // 16 






    return 0;
}