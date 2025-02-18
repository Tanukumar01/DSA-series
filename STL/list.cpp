#include<bits/stdc++.h>

using namespace std;
int main(){


    list<int>l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(12);
    l.push_front(12);


    l.pop_back();
    l.pop_front();

    for(int value:l){
         cout<<value<<" ";
    }
}