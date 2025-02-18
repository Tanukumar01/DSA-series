#include<bits/stdc++.h>

using namespace std;

void selectionSort(int arr[],int n ){

    for(int i=0;i<n;i++){
        int smallest_index = i;
        for(int j = i+1;j<n;j++){

            if(arr[j]<arr[smalest_index]){
                smalest_index=j;
            }
        }
        swap(arr[i],arr[smallest_index]);
    }
}

void printArray(int arr[],int n ){

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}
int main(){
    int n =5;
    int arr[n]= {2,3,1,8,9};

    selectionSort(arr,n);
    printArray(arr,n);

    return 0;
}