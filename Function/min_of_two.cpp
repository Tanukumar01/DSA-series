#include<bits/stdc++.h>

using namespace std;

int minOfTwo(int a ,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}
int main(){
    int result = minOfTwo(10,44);
    cout<<"Minimum number is "<<result;

    return 0;
}