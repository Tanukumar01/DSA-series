#include<bits/stdc++.h>

using namespace std;

int main(){

    priority_queue<int,vector<int>,greater<int>>q ;

    q.push(500);
    q.push(59);
    q.push(58);
    q.push(55);
    q.push(34);
    q.push(240);
    
  cout<<q.top();
}
