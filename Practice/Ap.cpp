#include<bits/stdc++.h>
using namespace std;
int main(){

    int n =3;
    vector<long long> ans;
    long long multi;
    int a = 1;
    long long  d = 0;
    
    for(int i = 0; i<n; i++){
        multi = a+(i-1)*d;
        ans.push_back(multi);
        d = d+4;
    
    }
    
    for(int j = 0 ; j<n ; j++){
        cout<<ans[j];
    }
}

