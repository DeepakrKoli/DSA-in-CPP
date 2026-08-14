#include <iostream>
using namespace std;

// Write a function to check if person is eligible to vote or not 

void votingEligibility(int age ){

    if( age >= 18){
        cout << "You are eligible to vote";
    }
    else {
        cout << "You are not eligible to vote";
    }

}

int main()
{
    

    int age;
    cout << "Enter your age :";
    cin >> age;

    votingEligibility(age);


    
    
    
    return 0;
    
}