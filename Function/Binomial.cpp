#include<bits/stdc++.h>

using namespace std ;


int factorial(int n ){

    int fact=1;
    for(int i =1;i<=n;i++){
        fact = fact*i;
    } return fact;

}
int nmr(int n , int b ){
    int fact_n = factorial(n);
    int fact_r = factorial(b);
    int fact_nmr = factorial(n-b);
   return fact_n/(fact_r*fact_nmr);
}

int main(){
  int n =8,b=2;
  cout<<nmr(n,b);

  return 0;
}