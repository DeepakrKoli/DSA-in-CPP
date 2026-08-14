#include <iostream>
using namespace std;

void copyArray(char arr[] ,  char copy []){

    
    int i = 0;
    while (arr[i] != '\0')
    {
        copy[i] = arr[i];
        i++;
    }

    copy[i] = '\0';
    


}


int main()
{
    

    // How to copy an character array 

    char arr[] = "Deepak";
    char copyarr[10];

    copyArray(arr , copyarr);
    
    cout <<copyarr <<endl;
    
    
    return 0;
    
}