#include <iostream>
using namespace std;

int main()
{
    
    // string library function 

    // string length 

    string name = "Deepak";
    size_t size = name.length();
    cout << size <<endl;

    for(size_t i = 0 ; i < name.length() ; i++){

        cout <<name[i]<<endl;
    }

    // string concatenate

    string name2 = "Swaraj";
    string surname = "Kashid";

    cout << name2.append(surname);
    
    
    return 0;
    
}