#include<bits/stdc++.h>

using namespace std;

int main(){

    map<string,int> m;

    m.insert({"tanu",1});
    m.insert({"rohit",23});
    m.insert({"anurag",4});
    for(auto val: m){
        
        cout<<val.first<<" : "<<val.second<<" "<<endl;
        cout<<m.count("rohit")<<endl;
    }
    
 return 0;
}