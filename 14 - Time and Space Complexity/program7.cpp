#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n,m;
    cin >>n >> m;

    // Time Complexity : O(n*m)
    // Space Complexity : O(1) 

    for(int i = 1; i <= n ; i++){

        for(int j = 1; j <= m ; j++){

            cout << j << " ";

        }
        cout <<endl;

    }
    
    
    return 0;
    
}