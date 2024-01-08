#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[] = {1, 4, 5, 6, 9, 9};
    int n = sizeof(a) / sizeof(a[0]);

    // Example 1: Find the position of the first element not less than 4
    int ind1 = lower_bound(a, a + n, 4) - a;
    cout << "Position of 4 or the first element not less than 4: " << ind1 << endl;

    // Example 2: Find the position of the first element not less than 7
    int ind2 = lower_bound(a, a + n, 7) - a;
    cout << "Position of 7 or the first element not less than 7: " << ind2 << endl;

    // Example 3: Find the position of the first element not less than 10
    int ind3 = lower_bound(a, a + n, 10) - a;
    cout << "Position of 10 or the first element not less than 10: " << ind3 << endl;

    return 0;
}
