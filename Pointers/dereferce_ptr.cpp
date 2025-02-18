// derefernce pointer method  
// syntax is *(ptr) in which  the operator is return the value at this address 

#include<bits/stdc++.h>

using namespace std;
 int main(){


    int a =10;
    int *ptr = &a;
    int **ptr_2 = &ptr;
    cout<<*(ptr)<<endl;
    cout<<**(ptr_2)<<endl;
 }