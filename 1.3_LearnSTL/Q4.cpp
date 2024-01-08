// Q. Find the smallest number greater than X in a sorted array. If no number exists print -1.

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    int n = sizeof(a) / sizeof(a[0]);

    // Example 1: Find the smallest number greater than 4
    int X1 = 4;
    int ind1 = upper_bound(a, a + n, X1) - a;
    if (ind1 < n)
        cout << "Smallest number greater than " << X1 << " is: " << a[ind1] << endl;
    else
        cout << -1 << endl;

    // Example 2: Find the smallest number greater than 2
    int X2 = 2;
    int ind2 = upper_bound(a, a + n, X2) - a;
    if (ind2 < n)
        cout << "Smallest number greater than " << X2 << " is: " << a[ind2] << endl;
    else
        cout << -1 << endl;

    // Example 3: Find the smallest number greater than 1
    int X3 = 1;
    int ind3 = upper_bound(a, a + n, X3) - a;
    if (ind3 < n)
        cout << "Smallest number greater than " << X3 << " is: " << a[ind3] << endl;
    else
        cout << -1 << endl;

    return 0;
}
