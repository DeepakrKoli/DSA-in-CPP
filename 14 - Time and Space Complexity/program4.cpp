#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    // Time Complexity: O(n²)
    // Reason: The outer loop runs n times, and for each iteration, the inner loop also runs n times. Therefore, total operations = n × n = n².

    // Space Complexity: O(1)
    // Reason: The algorithm uses only a constant amount of extra memory (variables n, i, and j), and no extra memory grows with n.

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}