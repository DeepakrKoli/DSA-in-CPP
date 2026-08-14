// Take age as input and classify:
// 0-12: Child
// 13-19: Teenager
// 20-59: Adult
// 60+: Senior Citizen

#include <iostream>
using namespace std;

int main()
{
    
    int age;
    cout << "Enter age :";
    cin >> age;

    if (age <=0){
        cout << "Enter valid age ";
    }
    else if (age <=12){
        cout << "Child";
    }
    else if (age <= 19){
        cout << "Teenager";
    }
    else if (age <= 59){
        cout << "Adult";
    }
    else {
        cout << "Senior Citizen";
    }
    
    
    return 0;
    
}