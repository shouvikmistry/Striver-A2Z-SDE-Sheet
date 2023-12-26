#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=0;j<(i+1);j++){
        cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=0;i<n;i++){
        for(int j=n;j>(i+1);j--){
            //   3  3> 1
            //   2   2>1
            //** 
            //   3   3>2
            //   3     
        cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}