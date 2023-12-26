#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch='A'+n-1;
    for(int i=0;i<n;i++){
        // ch+(n-1);
        
        for (char j = ch; j>=ch-i; j--)
        {
            /* code */
            
            cout<<j<<" ";
        }
        // ch=ch-n;
        cout<<"\n";
    }
    
    return 0;
}