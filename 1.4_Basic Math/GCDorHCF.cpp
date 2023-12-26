#include<iostream>
using namespace std;
 // Greatest Common Factor
int main(){
    int N1 = 10
    , N2 = 52
    ,gcd;

    for (int i = 1; i <= min(N1,N2); i++)
    {
        if (N1%i==0 && N2%i==0)
        {
            gcd = i;
        }
        
    }
    
    // Another way
    // for (int i = min(N1,N2);i = 1 ; i--)
    // {
    //     if (N1%i==0 && N2%i==0)
    //     {
    //         gcd = i;
    //           break;
    //     }
        
    // }
/*
    Using Euclidean’s theorem.

 GCD (n1,n2)  = GCD(n1-n2,n2)
 GCD (a,b)  = GCD(a-b,b)

 GCD (20,15)  = GCD(5,15)
 GCD (5,15)  = GCD(10,5)
 GCD (10,5)  = GCD(5,5)
 GCD (5,5)  = GCD(0,5)
if one number become 0 other number will be the BCD
 so, GCD = 5

simmilarly,
 GCD(a%b,b) = GCD(20%15,15)
            = GCD(5,15)
 GCD(15,5)   = GCD(15%5,5)
            = GCD(0,5)
    ---> so, GCD = 5
it take lesser time */
int gcd2;
int a=N1,b=N2;
while (a>0 && b>0) {
    /* code */
        if (a>b)
        {
            a=a%b;
        }
        else{
            b=b%a;
        }
    
     }
    if (a==0)
    {
        gcd2=b;
    }
    else{
        gcd2=a;
    }


    cout <<"NOrmal :" << gcd << endl;
    cout <<"Eulidian method :"<< gcd2 << endl;
    
    return 0;
}