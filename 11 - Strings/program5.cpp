#include <iostream>
using namespace std;

int main()
{

    // find a substring into the string 
    
    string name = "Deepak Koli";
    string name2 = "Koli";

    size_t ans = name.find(name2);
    cout << ans <<endl;

    if(ans != string::npos){

        cout << "String Found";

    }
    else {
        cout << "String not Found";
    }


    
    
    return 0;
    
}