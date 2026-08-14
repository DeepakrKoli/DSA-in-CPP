#include <iostream>
using namespace std;

int main()
{
    

    // Reverse a string 


    string name = "Deepak";
    string reverse;
    

    cout << "First Method " <<endl;
    for(size_t i = 0 ; i < name.length() ; i++){

        reverse.insert(0,1, name[i]);
    }

    cout << reverse << " ";
    cout <<endl;


    cout << "Second Method" <<endl;

    string name1 = "Swaraj";
    string reverse1;

    for(int i = name1.length() - 1 ; i >=0 ; i-- ){

        reverse1 += name1[i];

        
    }

    cout << reverse1 <<endl;




    
    return 0;
    
}