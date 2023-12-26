#include<iostream>
using namespace std;
 
int main(){
    int n,reverse,ans =0;
    cin >> n ;
    while (n>0)
    {
        reverse = n%10;
        ans = (ans*10)+reverse;
        n = n/10;
        
    }
    cout << ans;
    return 0;
}
// Complexity Analysis
// Time Complexity: O (n) where n is the number of digits in the given integer
// Space Complexity: O(1)