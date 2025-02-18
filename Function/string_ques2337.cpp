#include<bits/stdc++.h>
using namespace std;

int main(){

 int n = start.size();


int i =0;
int j =0;

while(i<n||j<n){

    while(i<n && start[i]=='_'){
        i++;
    }
    while(j<n && target[j] =='_'){
        j++;
    }
    if(start[i]!= target[j]) return false;
    if(i==n && j==n) return i==n&&j==n;
    else if (start[i]=='L' && i<j) return false;
    else if ( start[i]=='R' && i>j) return false;
    i++;
    j++;

}
return true;

}

