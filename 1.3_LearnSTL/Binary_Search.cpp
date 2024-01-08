// Q1. Check if X exists in the sorted array or not?

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[] = {1, 4, 5, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);

    // Example 1: Check if 3 exists in the array
    bool res1 = binary_search(a, a + n, 3);
    cout << "Does 3 exist? " << (res1 ? "Yes" : "No") << endl;

    // Example 2: Check if 4 exists in the array
    bool res2 = binary_search(a, a + n, 4);
    cout << "Does 4 exist? " << (res2 ? "Yes" : "No") << endl;

    return 0;
}
