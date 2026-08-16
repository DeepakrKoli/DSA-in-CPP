#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    // Time Complexity: O(n²)
    // Reason: The outer loop runs n times, and the inner loop runs 1 + 2 + 3 + ... + n times in total, which equals n(n+1)/2.This simplifies to O(n²).

    // Space Complexity: O(1)
    // Reason: The algorithm uses only a constant amount of extra memory (variables n, i, and j).

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}