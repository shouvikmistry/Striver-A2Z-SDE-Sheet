#include<iostream>
using namespace std;

int main(){
    int N1 = 12
    , N2 = 9
    ,gcd;

    for (int i = 1; i <= min(N1,N2); i++)
    {
        if (N1%i==0 && N2%i==0)
        {
            gcd = i;
        }
        
    }
    

    int lcm = (N1*N2)/gcd;
    cout << lcm << endl;
    
    return 0;
}