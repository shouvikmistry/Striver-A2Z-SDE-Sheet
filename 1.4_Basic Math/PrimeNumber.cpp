
#include<bits/stdc++.h>
#include<iostream>
// #include<math.h>
using namespace std;
 
int main(){
    int n = 17;
    int count = 0 ;
    // cin >> n ;
    // for (int i = 1; i <= sqrt(n); i++)  // it take sqrt(n)
    for (int i = 1; i*i <= n; i++) // it take less than sqrt(n)
    //              6*6 = 36
    //              7*7 = 36 false
    {
        if (n%i == 0)
        {
            count++; 
            if ((n/i) != i) // to ensure that same divisor should not print twice
            {
            count++; 
            }
            
        }
        
    }
        if (count == 2) cout <<n<<" Prime number";
        else
        { 
            cout <<n<<" Not Prime number";
        }
    
    return 0;
}
// Complexity Analysis
// Time Complexity: O(n) where n is the number of digits since we need to traverse every digit and add digits raised to power no. of digits to sum.

// Space Complexity: O(1) since no extra space is required