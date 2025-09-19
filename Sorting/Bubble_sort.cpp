#include<bits/stdc++.h>

using namespace std;

void bubbleSort( int arr[], int n ){

    for(int i =0; i<n; i++){
        for(int j =0; j<n-i-1; j++){

        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
        } 
    }   
}
void printArray(int arr[],int n ){

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
int main(){
    int  n= 5;
    int arr[n]= {2,0,2,1,1,0};

    bubbleSort(arr,n);
    printArray(arr,n);

    return 0;
}