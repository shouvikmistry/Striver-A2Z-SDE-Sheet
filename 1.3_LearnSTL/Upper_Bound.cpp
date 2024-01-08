#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[] = {1, 4, 5, 6, 9, 9};
    int n = sizeof(a) / sizeof(a[0]);

    // Example 1: Find the position of the first element greater than 4
    int ind1 = upper_bound(a, a + n, 4) - a;
    cout << "Position of the first element greater than 4: " << ind1 << endl;

    // Example 2: Find the position of the first element greater than 7
    int ind2 = upper_bound(a, a + n, 7) - a;
    cout << "Position of the first element greater than 7: " << ind2 << endl;

    // Example 3: Find the position of the first element greater than 10
    int ind3 = upper_bound(a, a + n, 10) - a;
    cout << "Position of the first element greater than 10: " << ind3 << endl;

    return 0;
}
