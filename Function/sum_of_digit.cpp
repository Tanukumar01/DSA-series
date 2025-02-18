#include<bits/stdc++.h>

using namespace std;

int sumOfdigit(int n ){
  int res =0;
  while(n>0){

  int rem = n%10;
      n=n/10;
      res = res+rem;


       }
       return res;
  }


int main(){
    int result = sumOfdigit(14976);
    cout<<result;
    cout<<endl;
    return 0;
}