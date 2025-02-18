#include<bits/stdc++.h>

using namespace std;


int main(){



    int nums[4]={10,4,8,3};
    int left_sum[4];

    for(int i =0; i<4-1;i++){
        left_sum[0]=left_sum[0]+nums[i];
     
        cout<<left_sum[i];
    

    } 

    return 0;
}



