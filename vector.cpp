#include<bits/stdc++.h>

using namespace std;
int main(){
    vector<int> vec ;
    vec.push_back(5);
    vec.push_back(2);
    vec.push_back(6);
    vec.push_back(9);
    vec.push_back(10);
    

    cout<<"the front value is "<<vec.front();
    cout<<endl;
      for(int i: vec){
    cout<<i<<endl;
   } cout<<"The size is "<<vec.size()<<endl;;
     cout<<"The last value  is "<<vec.back()<<endl;
     cout<<"the capacity is " <<vec.capacity();
     
  
 }

