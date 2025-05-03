#include<bits/stdc++.h>

using namespace std;

int main(){
stack<int>stk;

stk.push(2);
stk.push(3);
stk.push(6);
stk.push(6);
stk.pop();
// stk.top();
stk.push(20);
stk.size();

while(!stk.empty()){
    cout << stk.top() << " ";
    stk.pop();
}
return 0;
}