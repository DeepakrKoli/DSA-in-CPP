#include <iostream>
using namespace std;

int getLength (char arr[]){

    int count = 0;
    int index = 0;

    while ( arr[index] != '\0')
    {
        count ++;
        index ++;
    }

    return count;

}

int main()
{
    
    // Find the length of character array 

   
    char arr[] = "Deepakkoli";
    int length = getLength(arr);

    cout << length;
    return 0;
    
}