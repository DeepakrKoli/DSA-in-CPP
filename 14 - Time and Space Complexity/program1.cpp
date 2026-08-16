#include <iostream>
using namespace std;

int main()
{
    // Time Complexity: O(1)
    // Reason: The loop always executes exactly 5 times, so the number of operations does not depend on the input size (n).

    // Space Complexity: O(1)
    // Reason: The algorithm uses only one fixed-size variable (i) and no extra memory that grows with the input size.

    for (int i = 0; i < 5; i++)
    {
        cout << i << " ";
    }

    return 0;
}