// Q. Find the first occurrence of a X in a sorted array. If it does not exits, print -1.

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[] = {1, 4, 14, 4, 4, 9, 9, 10, 11};
    int n = sizeof(a) / sizeof(a[0]);

    // Example 1: Find the position of the first element not less than 4
    int X1 = 4;
    int ind1 = lower_bound(a, a + n, X1) - a;
    if (ind1 != n && a[ind1] == X1)
        cout << "First occurrence of " << X1 << " is at index " << ind1 << endl;
    else
        cout << X1 << " does not exist in the array." << endl;

    // Example 2: Find the position of the first element not less than 2
    int X2 = 2;
    int ind2 = lower_bound(a, a + n, X2) - a;
    if (ind2 != n && a[ind2] == X2)
        cout << "First occurrence of " << X2 << " is at index " << ind2 << endl;
    else
        cout << X2 << " does not exist in the array." << endl;

    // Example 3: Find the position of the first element not less than 12
    int X3 = 12;
    int ind3 = lower_bound(a, a + n, X3) - a;
    if (ind3 != n && a[ind3] == X3)
        cout << "First occurrence of " << X3 << " is at index " << ind3 << endl;
    else
        cout << X3 << " does not exist in the array." << endl;

    return 0;
}
