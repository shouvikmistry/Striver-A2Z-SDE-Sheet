#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> a = {1, 4, 5, 6, 9, 9};

    // Example: Find the position of the first element not less than 4
    auto it = lower_bound(a.begin(), a.end(), 4);
    int ind = it - a.begin();

    cout << "Position of 4 or the first element not less than 4: " << ind << endl;

    return 0;
}
