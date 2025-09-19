 #include<iostream>
 using namespace std;

 int Fibo(int n ){
    if(n == 0 ||n == 1){
        return n;
    }
return Fibo(n-1)+Fibo(n-2);
 }

 int main(){
    cout<<Fibo(6);
    return 0;
 }