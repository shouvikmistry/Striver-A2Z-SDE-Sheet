// Q. Find the first occurrence of a X in a sorted array. If it does not exits, print -1.

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    int n = sizeof(a) / sizeof(a[0]);

    // Example 1: Find the position of the first element greater than 4
    int X1 = 4;
    int ind1 = upper_bound(a, a + n, X1) - a;
    ind1--;
    if (ind1 >= 0 && a[ind1] == X1)
        cout << "Last occurrence of " << X1 << " is at index " << ind1 << endl;
    else
        cout << X1 << " does not exist in the array." << endl;

    // Example 2: Find the position of the first element greater than 2
    int X2 = 2;
    int ind2 = upper_bound(a, a + n, X2) - a;
    ind2--;
    if (ind2 >= 0 && a[ind2] == X2)
        cout << "Last occurrence of " << X2 << " is at index " << ind2 << endl;
    else
        cout << X2 << " does not exist in the array." << endl;

    // Example 3: Find the position of the first element greater than 0
    int X3 = 0;
    int ind3 = upper_bound(a, a + n, X3) - a;
    ind3--;
    if (ind3 >= 0 && a[ind3] == X3)
        cout << "Last occurrence of " << X3 << " is at index " << ind3 << endl;
    else
        cout << X3 << " does not exist in the array." << endl;

    return 0;
}
