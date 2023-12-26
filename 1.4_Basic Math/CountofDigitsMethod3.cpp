// Use logarithm base 10 to count the number of digits. As
// The number of digits in an integer = the upper bound of log10(n).
// Example :
// n = 12345
// log10(12345) = 4.091
// Integral part of 4.091 is 4 and 4 + 1 =  5 which is also the number of digits in 12345 
// Complexity Analysis
//     Time Complexity: O (1) 
//     Space Complexity: O(1)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n ;
    int digits = floor(log10(n) + 1); //floor is a mathematical function that rounds a floating-point number down to the nearest integer that is less than or equal to the given number
    cout << digits;  
    return 0;
}