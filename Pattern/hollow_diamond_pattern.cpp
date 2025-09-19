#include<iostream>

using namespace std;

int main(){
    int n = 4;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            //spaces
            for(int j =0; j<2*i-1; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

    // now moving to the lower part of the diamond 
    for(int i = 0; i<n-1; i++){
       for(int j = 0; j<=i; j++){
        cout<<" ";
       }

       cout<<"*";
       
       if(i != n-2){
        //spacesa
       for(int j = 0; j<2*(n-i)-5; j++){
            cout<<" ";
       }
       cout<<"*";
       } 
       cout<<endl;
    }

} 