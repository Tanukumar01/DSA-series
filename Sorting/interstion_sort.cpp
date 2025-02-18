#include<bits/stdc++.h>

using namespace std;




int insertionSort(int ar[],int n ){
 
  for(int i =1;i<n;i++){
     int  cur =ar[i];
     int prev =i-1;
 
    while(prev>=0 && ar[prev]>cur){
        ar[prev+1] = ar[prev];
        prev--;
    }
    ar[prev+1]=cur;
  }
  
    
}
int printArray(int ar[],int n ){
    for(int i =0;i<n;i++){
        cout<<ar[i]<<" ";
    }cout<<endl;
}

int main(){
    int n =5;
    int ar[5] ={2,3,2,5,7};

    insertionSort(ar,n);
    printArray(ar,n);

    return 0;
}
