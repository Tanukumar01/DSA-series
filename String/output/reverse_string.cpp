#include<bits/stdc++.h>

using namespace std;

int main(){

    string s ="racecar";
    int st =0;
    int end = s.length()-1;

    while(st<end){

     if(s[st]==s[end]){
      cout<<"this is palindorme"<<endl;
        st++;
        end--;
        
     }
     else{
        cout<<"this not palindorme";
     }
     
    }

   // return 0;
}