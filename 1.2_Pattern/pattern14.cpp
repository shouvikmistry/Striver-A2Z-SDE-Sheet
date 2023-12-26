#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;

      // Outer loop for the number of rows.
      for(int i=0;i<N;i++){
      char ch='A';
          
          // for printing numbers in each row
          for(int j=0;j<=i;j++){
              cout<<ch<<" ";
              ch++;
          }
          
        cout<<"\n";

        
    }
    
    return 0;
}