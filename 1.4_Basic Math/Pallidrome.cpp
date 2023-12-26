#include<iostream>
using namespace std;
 
int main(){
    int start,n,reverse,ans =0;
    cin >> start ;
    n= start ;
    while (n>0)
    {
        reverse = n%10;
        ans = (ans*10)+reverse;
        n = n/10;
        
    }
    if (start==ans)
    {
        cout<<"Palidrome";
    }
    else
    {
        cout<<"NOt Palidrome";
    }
    
    return 0;
}
// Complexity Analysis
// Time Complexity: O(logN) for reversing N digits of input integer.
// Space Complexity: O(1)