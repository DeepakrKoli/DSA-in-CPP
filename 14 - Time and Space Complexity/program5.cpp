#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];

    // Time Complexity: O(n)
    // Reason: The first loop takes n inputs, and the second loop prints n elements. Total operations = n + n = 2n, which simplifies to O(n).

    // Space Complexity: O(n)
    // Reason: The array arr[n] stores n integers, so the extra memory grows linearly with the input size.

    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j <= n - 1; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}