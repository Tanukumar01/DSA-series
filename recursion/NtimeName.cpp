#include<iostream>

using namespace std;

void nTimes(int n ){
    if( n == 1){       // base case
        cout<<"TanuKumar ";
        return;
    }
    cout<<"TanuKumar ";
    nTimes(n-1);  // recursive function
}

int main(){
        nTimes(6);
        return 0;        
}