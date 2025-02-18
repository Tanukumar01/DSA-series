#include<bits/stdc++.h>

using namespace std;

int main(){

    int ar[5]={2,90,3,3,6};

    for(int i =0;i<5;i++){
       
       if(ar[i]+ar[i+1]==9)
       cout<<i<<i+1;
    }
    return 0;
}
{2,4,5,7,}