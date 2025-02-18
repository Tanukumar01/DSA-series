#include<bits/stdc++.h>

using namespace std;

int main(){

int target= 4;
int mat[3][3];


 for(int i=0;i<3;i++){
    for(int j =0;j<3;j++){
        cin>>mat[i][j];
    }
 }
 for(int i=0;i<3;i++){
    for(int j =0;j<3;j++){
        if(mat[i][j]==target){
            return true;
        }else{
            return false;
        }

    }
 }


 }



