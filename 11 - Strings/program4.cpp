#include <iostream>
using namespace std;

int main()
{
    
    // compare both string 

 
    string name = "Deepak";
    string name2 = "Koli";

    if(name.compare(name2) == 0){
        cout << "Both strings are equal";
    }
    else{
        cout << "Both strings are not equal";
    }

    
    
    
    return 0;
    
}