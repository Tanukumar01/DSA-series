#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> vec = {1,2,4,6,7}; 

    vector<int>::iterator its;
    for(its =vec.begin(); its!=vec.end();its++){
        cout<<*(its)<<endl;

    }
    return 0;
}