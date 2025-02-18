#include<bits/stdc++.h>

using namespace std;
int main(){


    vector<int> v= {1,2,4,6,7,3};

    sort(v.begin(),v.end(),greater<int>());

    for(auto val : v){
        cout<<val<<endl;
    }
}