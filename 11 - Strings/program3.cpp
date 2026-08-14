#include <iostream>
using namespace std;

int main()
{
    
    // insert another string at any position of a string 

    string name = "Deepak";
    string surname = "Koli";
    char x = 'x';

    name.insert(2, surname); // expected output :  DeKoliepak 
    cout <<name <<"\n";

    // to get the substring form a string 

    string name2 = "SwarajSantoshKashid";

    cout << name2.substr(0,6);


    
    
    return 0;
    
}