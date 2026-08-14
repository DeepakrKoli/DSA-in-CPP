#include <iostream>
using namespace std;


int main() {


    // Bitwise Operator 

    // bitwise and 
    cout << ( 5 & 4) <<endl; // 4
    // bitwise or 
    cout << ( 5 | 4) <<endl; // 5
    // bitwise not 
    cout << (~5) <<endl; // -6

    // left shift operator 
    cout << ( 5 <<1) <<endl; // 10
    cout << ( 5 <<2) <<endl; // 20
    cout << ( 5 <<3) <<endl; // 40
    cout << ( 5 <<4) <<endl; // 80

    // right shift operator 
    cout << ( 5 >> 1) <<endl; // 2
    cout << ( 5 >> 2) <<endl; // 1
    cout << ( 5 >> 3) <<endl; // 0 

    // xor opertator => exclusive or 

    cout << ( 5 ^ 5) <<endl; // 0
    cout << (5 ^ 7 ) <<endl; // 2





    return 0;
}