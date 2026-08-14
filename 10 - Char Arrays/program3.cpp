#include <iostream>
using namespace std;

int getLength (char arr[] ){

    int i = 0;
    while (arr[i] != '\0')
    {
        i++;
    }

    return i;

}

void concatenat( char arr[] , char arr2[]){

    int aIndex = getLength(arr);
    int bIndex = 0;

    while(arr2[bIndex] != '\0'){

        arr[aIndex] = arr2[bIndex];
        aIndex++;
        bIndex++;
    }

    arr[aIndex] = '\0';




}

int main()
{
    
    // Concatenation 


    char arr1[50] = "My name is Deepak ";
    char arr2[50] = "And i Learned Concatenation of char Array";

    // cout << getLength(arr1);
    concatenat(arr1 , arr2);

    cout << "Print arr1 : " <<arr1;

    
    
    return 0;
    
}