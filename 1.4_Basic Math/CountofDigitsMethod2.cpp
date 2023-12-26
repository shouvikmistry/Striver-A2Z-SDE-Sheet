// Convert the integer into a string.
// Find the length of the string
// Complexity Analysis
//     Time Complexity: O (1) 
//     Space Complexity: O(1)
#include<iostream>
using namespace std;
 
int main(){
    int n,count = 0;
    cin >> n ;
            string x = to_string(n);
            cout << x.length();      
    return 0;
}