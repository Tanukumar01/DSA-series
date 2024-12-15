#include<bits/stdc++.h>

using namespace std;

int main(){

    int ar[7]={3,-4,5,4,-1,7,8};
    int maxSum= INT_MIN;

    for(int st=0;st<7;st++){

        int cur_sum =0;
        for(int end=st;end<7;end++){
            cur_sum=cur_sum+ar[end];
            maxSum= max(cur_sum,maxSum);
        }
    } cout<<""<<maxSum<<endl;
      return 0;

}