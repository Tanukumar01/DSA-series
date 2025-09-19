// our goal is to print one to n number 
#include<iostream>

using namespace std;

void Nnumber(int n){

if(n == 10){
    cout<<n;
    return;
}
cout<<n<<endl;
Nnumber(n+1);
}
int main(){
    Nnumber(1);
    return 0;
}