#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> a = {1, 4, 5, 6, 9, 9};

    // Value to search
    int x = 5;

    // Find the position of the first element greater than x
    auto it = upper_bound(a.begin(), a.end(), x);
    int ind = distance(a.begin(), it);

    // Output the result
    cout << "Position of the first element greater than " << x << ": " << ind << endl;

    return 0;
}
