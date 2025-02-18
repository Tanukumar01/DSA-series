#include<bits/stdc++.h>

using namespace std;

int main(){

    int n =5;
    int m =4;
    int ar[n]={12,3,5,7,3};
    int ar_2[m]={2,4,6,0};

    vector<int>ans;
    int i =0;
    int j =0;
    int k =5;

    while(i<=n && j<=m){
        if(ar[i]>=ar_2[j]){
            ans.push_back(ar_2[j]);
        }else{
            ans.push_back(ar[i]);
        }
    }    sort(ans.begin(),ans.end());
          for(int z =0;z<ans.size();z++){
            cout<<ans[z];
          }cout<<endl;
          cout<<ans[k-1];
  return 0;
            /// this solution is worang
}