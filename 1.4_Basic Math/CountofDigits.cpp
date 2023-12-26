#include<iostream>
using namespace std;
 
int main(){
    int n,count = 0;
    cin >> n ;
    while (n>0)
    {
        n = n / 10;
        count++;
    }
    cout << count ;
    return 0;
}
// Complexity Analysis
// Time Complexity: O (n) where n is the number of digits in the given integer
// Space Complexity: O(1)