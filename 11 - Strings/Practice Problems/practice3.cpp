#include <iostream>
using namespace std;

int main()
{
    
    // Count vowel or consonants

    string str;
    cout << "Enter string : ";
    getline(cin , str);

    int vowelCount = 0;
    int consonantsCount = 0;

    
    for( size_t i = 0 ; i < str.length() ; i++){

        if( (str[i] == 'a' || str[i] == 'A') || (str[i] == 'e' || str[i] == 'E') || (str[i] == 'i' || str[i] == 'I') || (str[i] == 'o' || str[i] == 'O') || (str[i] == 'u' || str[i] == 'U')) {

            vowelCount ++;

        }
        else {
            consonantsCount ++;
        }
    }

    cout << "Vowels in string entered : " << vowelCount <<endl;
    cout << "Consonants in string entered : " << consonantsCount <<endl;


    
    
    return 0;
    
}