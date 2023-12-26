// What are Armstrong Numbers?

// Armstrong Numbers are the numbers having the sum of digits raised to power no. of digits is equal to a given number. Examples- 0, 1, 153, 370, 371, 407, and 1634 are some of the Armstrong Numbers.

#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    int duplicate,n,lastdigit,temp,count=0,sum =0;
    cin >> n ;
    duplicate = n ;
    // need to count how many digits are there
    temp = n ;
    while (temp>0)
    {
        count++;
        temp = temp / 10;
    }
    // cout << count << endl << n << endl;
    
    while (n>0)
    {
        lastdigit = n % 10;
    cout  << sum << endl;
        sum += pow(lastdigit,count);
        n = n/10;
    cout  << sum <<" "<< lastdigit <<" "<<count <<" "<<pow(lastdigit,count)<< endl;
        
    }
    cout  << sum << endl;
    if (duplicate==sum)
    {
        cout<<"Armstrong Numbers";
    }
    else
    {
        cout<<"NOt Armstrong Numbers";
    }
    
    return 0;
}
// Complexity Analysis
// Time Complexity: O(n) where n is the number of digits since we need to traverse every digit and add digits raised to power no. of digits to sum.

// Space Complexity: O(1) since no extra space is required