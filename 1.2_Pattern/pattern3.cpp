#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            /* code */
            cout<<n-j+1<<" ";
        }
        cout<<"\n";
        
    }
    
    return 0;
}