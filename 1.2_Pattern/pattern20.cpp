#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int space=0;
    int space2=n*2-2;
    for(int i=0;i<n;i++){

        // for lower left star
        for (int j = 0; j<=i; j++)
        {
            cout<<"*";
        }
        // for lower Space   
        for (int j = 0; j<space2; j++)
        {
            cout<<" ";
        }
        // for lower right star
        for (int j = 0; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
        space2-=2;
    }
    for(int i=0;i<n;i++){

        // for uper left star
        for (int j = n; j>i; j--)
        {
            cout<<"*";
        }
        // for uper Space   
        for (int j = 0; j<space; j++)
        {
            cout<<" ";
        }
        // for uper right star
        for (int j = n; j>i; j--)
        {
            cout<<"*";
        }
        cout<<"\n";
        space+=2;
    }
    
    return 0;
}