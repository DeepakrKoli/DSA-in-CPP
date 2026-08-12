#include <iostream>
using namespace std;

// Write a function to return the simple interest 

double simpleInterest(double p , double t , double r){

    double si = (p * t * r) / 100;
    return si;

}

int main()
{

    double principal , time , rate;
    cout << "Enter principal in rupees :";
    cin >> principal;
    cout << "Enter time in years :";
    cin >>time;
    cout << "Enter rate in %  :";
    cin >>rate;
    
    double result = simpleInterest( principal , time , rate);
    cout << result <<endl;
    
    
    
    return 0;
    
}