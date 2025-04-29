#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
   cout<<"enter the element of array";
    for(int i =0 ;i<n;i++){
        cin>>arr[i];
    }
   //precompute

   int hash[13] ={0}; // intial count is Zero
   for(int i =0; i<n; i++){
     hash[arr[i]] += 1;

   }


   int q;
   cin>>q;
   while(q--){
    int number;  // enter the size of array 
    cin>>number; // enter the number which you to count occurence
    //fetch
    cout<<hash[number]<<endl;
   }
   return 0;
}