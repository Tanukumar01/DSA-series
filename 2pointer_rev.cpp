#include<bits/stdc++.h>

using namespace std;



int reverseArray(int ar[],int size){

    int start =0;
    int end=size-1;
    while(start<end){
        swap(ar[start],ar[end]);
        start++;
        end--;
    }
}
int main(){
    int ar[]= {1,2,3,4,5,6,7,8};
    int size = 8;
    reverseArray(ar,size);
    for(int i=0;i<size;i++){
        cout<<ar[i]<<" ";
    
    }
    return 0;
}