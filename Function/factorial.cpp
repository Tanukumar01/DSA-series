 #include<bits/stdc++.h>

 using namespace std;

 int factorialN(int n){
    int fact =1;
    for(int i =1;i<=n;i++){
        fact =fact*i;
    }   return fact;

 }

 int main(){

     int result = factorialN(5);
     cout<<"factorial of N is "<<result;
     cout<<endl;

     return 0;


 }