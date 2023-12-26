#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;

      // Outer loop for the number of rows.
          
      char ch='A';
      ch=ch+(N-1);
      for(int i=0;i<N;i++){
          // for printing numbers in each row
          for(int j=0;j<=i;j++){
              cout<<ch<<" ";
          }
              ch--;
          
        cout<<"\n";

        
    }
    
    return 0;
}