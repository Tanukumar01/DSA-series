#include<bits/stdc++.h>

using namespace std;

int sumN(int n ){
    int sum =0;
    for(int i =0; i<n; i++){
         sum = sum+i;
       
    }
        return sum;

}

int main(){
    int result = sumN(10);
    cout<<"The series is "<<result;


   return 0;
}