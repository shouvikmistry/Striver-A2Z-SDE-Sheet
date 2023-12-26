#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;

      int num=1;
      // Outer loop for the number of rows.
      for(int i=0;i<N;i++){
          
          // for printing numbers in each row
          for(int j=0;j<=i;j++){
              cout<<num;
              num++;
          }
          
        cout<<"\n";

        
    }
    
    return 0;
}