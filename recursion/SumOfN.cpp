#include<iostream>

using namespace std;
int sum= 0;
int SumN(int n ){
    if(n == 0){
        return sum;
    }
    sum+=n;
    return SumN(n-1);

}


int main(){
   cout<<SumN(10);
   return 0;
}