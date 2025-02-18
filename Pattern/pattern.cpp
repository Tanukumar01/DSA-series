#include<bits/stdc++.h>

using namespace std;

int main(){

int n ;

cin>>n;

for(int i=1;i<=n;i++){   //outter loop print the number of line of pattern 
    
    for(int j=1;j<=n;j++){ //the inner loop  print the pattern 
      cout<<j;
    }
    cout<<endl;
}   
return 0;

}