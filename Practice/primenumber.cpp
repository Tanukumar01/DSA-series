#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    int flag = 0;
    if(n<2) {
        return false;
    }
    for(int i = 2; i<=n ;i++){
        if(n%i==0){
            flag = 1;
            break;
        }
        if(flag == 0){
            return true;
        }
    }
}
vector<int>primesnum(int left,int right){
    vector<int>primes;
    for(int num = left; num<=right; num++ ){
        if(isprime(num)){
            primes.push_back(num);
        }
    }return primes;
}

int main(){
    int left = 10;
    int right = 19;
    vector<int>primes= primesnum(left,right);
    for(int prime:primes){
        cout<<prime<<endl;;
    }
    return 0;
}