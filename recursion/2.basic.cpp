#include<bits/stdc++.h>

using namespace std;


void fun(int count){
     
     cout<<count<<endl;
     
     count++;

     fun(count);
     

}
int main(){
    {  
        fun(0);
        
    }
}