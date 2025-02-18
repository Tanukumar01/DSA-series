#include<bits/stdc++.h>

using namespace std;


int binarySearch(vector<int>arr, int target){
 
 int start =0,end=arr.size();
 int mid = start+(end-start)/2;

 while(start<=end){

    if(target>arr[mid]){
        start= mid+1;
    }
    else if(target<arr[mid]){
        end = mid-1;
    }else{
        return mid;
    }

 }
  
 return -1;
}
int main(){
vector<int>arr1={2,4,6,8,10,12};//for even array 
 int target_1 = 8;
 cout<<"for even array :"<<binarySearch(arr1,target_1)<<endl;

vector<int>arr2={-1,0,3,5,9,11};//for odd array 
int target2=9;
cout<<" for odd array "<<binarySearch(arr2,target2)<<endl;

return 0;
}