#include<bits/stdc++.h>

using namespace std;


void fun(int count){
     if(count == 10){
        return;
     }
     cout<<count<<endl;
     
     count++;

     fun(count);
     

}
int main(){
    {  
        fun(0);
        
    }
}