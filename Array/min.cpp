#include<bits/stdc++.h>

using namespace std;

int main(){

int ar[]={89,4,2,9,32};
int n =5;
int smallest =0;

for(  int i =0;i<n;i++){
    if( ar[i]<ar[smallest]){
        smallest=i;
        }
    
}cout<<"smallest num is :"<<smallest<<endl;
    
 return 0;

}