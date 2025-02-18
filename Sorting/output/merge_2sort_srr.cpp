#include<bits/stdc++.h>

using namespace std;

int main(){
    int m = 6;
    int n=3;
    int ar[m]={1,2,3,0,0,0};
    int ar2[n]={4,5,6};
    int index = m+n-1;
    int i = m-1;
    int j = n-1;

    while(i<=0 &&j<=0){


        if(ar[i]<=ar2[j]){
            ar[i]=ar2[j];
            i--;
            j--;
        }else{
            ar[index] = ar2[j];
            index--;
            i--;
        }
        for(int i =0;i<index;i++){
            cout<<ar[i]<<" ";
        }
    }
    return 0;
}