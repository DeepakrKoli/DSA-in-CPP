#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    
    // Time Complexity: Θ(n³)
    // Auxiliary Space: O(1)


    for(int i = 1 ; i <= n ; i ++){

        for(int j = 1; j <= i*i ; j++){

            cout << j <<" ";

        }
        cout <<endl;

    }
    
    
    return 0;
    
}