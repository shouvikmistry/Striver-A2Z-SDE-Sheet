#include<iostream>
using namespace std;
 
int main(){
    int n,lastDigit;
    cin >> n ;
     cout <<"Digits are = " ;
    while (n>0)
    {
        lastDigit = n%10;
        cout <<lastDigit <<"  ";
        n = n / 10;
    }
    
    return 0;
}