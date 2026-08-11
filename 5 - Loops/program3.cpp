#include <iostream>
using namespace std;

int main(){

    // continue keyword

    for(int i = 1 ; i <=10 ; i++){
        cout << i << " ";
    }

    cout << endl;

    for(int i = 1 ; i <= 10 ; i++){

        cout <<i<<" " <<endl;
        if(i == 7){
            continue;
        }
        cout << "This code will run for all iteration except i == 7"<<endl;

    }


    for (int i = 1; i <= 10 ; i++){
        
        if(i == 7){
            continue;
        }
        cout <<i << " ";

    }



    return 0;
}