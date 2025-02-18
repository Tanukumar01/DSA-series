#include<bits/stdc++.h>

using namespace std;

void fun(){
    cout<<"1";
    fun(); //fun() this function call again and  again infinite time 
}           //so here segmentation fault occurand may be stack overflow
int main(){
    fun();
    
}
