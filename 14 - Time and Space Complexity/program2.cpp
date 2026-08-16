#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    // Time Complexity: O(n)
    // Reason: The loop executes n times, so the number of operations grows linearly with the input size.

    // Space Complexity: O(1)
    // Reason: The algorithm uses only a constant amount of memory (variables n and i). No extra memory grows with n.

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }

    return 0;
}