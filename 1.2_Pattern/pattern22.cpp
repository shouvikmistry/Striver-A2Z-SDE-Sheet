#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
         if (i == 0 || j == 0 || i == 2*n-2 || j == 2*n-2)
            {
                cout<<n;
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<"\n";
    }
    
    
    return 0;
}