#include<bits/stdc++.h>

using namespace std;

int main(){
    int size =7;
    int arr[size] ={1,2,3,5,7,8,10};
    int st= 0;
    int end = size -1;

 while(st<end){
    int mid = st+(end-st)/2;

    if(arr[mid-1]>arr[mid] && arr[mid]> arr[mid+1]){
        return mid;
    }
    if(arr[mid-1]<arr[mid]){
        st = mid +1;
    }else{
        end = mid-1;
    }
 } 
 return -1;
}
