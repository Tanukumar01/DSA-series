#include<bits/stdc++.h>

using namespace std;

bool isPossibleans(vector<int>arr,int n ,int m ,int maxAllowedTime){
    int painter = 1,time=0;

    for(int i =0;i<n;i++){
        if(time+arr[i]<=maxAllowedTime){
            time +=arr[i];
        }else{
            painter++;
            time = arr[i];
        }
    }return painter<=m;
}
int minTimetoPaint(vector<int>arr,int n ,int m){
   
    int sum=0,ans=1,maxS = INT_MIN;

    for(int i =0;i<n;i++){

    sum+=arr[i];
    maxS = max(maxS,sum);
    }
 
 int st = maxS, end=sum;

 while(st<=end){
    int mid = st+(end-st)/2;

    if(isPossibleans(arr,n,m,mid)){
        ans = mid;
        end = mid-1;
    }else {
        st = mid+1;
    }
    
 }
 return ans ;


}

int main(){

vector<int> arr = {40,30,20,10};
int n =4,m=2;

cout<<minTimetoPaint(arr,n,m)<<endl;
return 0;

}