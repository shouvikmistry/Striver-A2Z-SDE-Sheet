// Q. Find the largest number smaller than X in a sorted array. If no number exists print -1.
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    int n = sizeof(a) / sizeof(a[0]);

    // Example 1: Find the largest number smaller than 4
    int X1 = 4;
    int ind1 = lower_bound(a, a + n, X1) - a;
    ind1--;
    if (ind1 >= 0)
        cout << "Largest number smaller than " << X1 << " is: " << a[ind1] << endl;
    else
        cout << -1 << endl;
// Need to FIX this
    // Example 2: Find the largest number smaller than 2
    int X2 = 2;
    int ind2 = lower_bound(a, a + n, X2) - a;
    ind2--;
    if (ind2 >= 0)
        cout << "Largest number smaller than " << X2 << " is: " << a[ind2] << endl;
    else
        cout << -1 << endl;

    // Example 3: Find the largest number smaller than 1
    int X3 = 1;
    int ind3 = lower_bound(a, a + n, X3) - a;
    ind3--;
    if (ind3 >= 0)
        cout << "Largest number smaller than " << X3 << " is: " << a[ind3] << endl;
    else
        cout << -1 << endl;

    return 0;
}
