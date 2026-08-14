#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    
    // Compare character arrays

    char a[20] = "Deepak";
    char b[20] = "Koli";

    
    if(strcmp(a , b) == 0){
        cout << "Both arrays are equal"<<endl;
    }
    else {
        cout << "Both arrays are not equal"<<endl;
    }
    
    // concatenate two char arrays 

    cout << strcat(a , b);

    
    return 0;
    
}