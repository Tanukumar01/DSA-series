#include<iostream>
#include<deque>

using namespace std;

int main(){

    deque<int>d = {1,23,4,5,6};
     
     d.push_back(9);
    cout<<d[2]<<endl;
    cout<<d.size()<<endl;

    for(int val : d){
        cout<<val<<" ";
    }
}