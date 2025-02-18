#include<bits/stdc++.h>
using namespace std;

class rectangle{
    public:
    int l = 4;
    int b = 5;

    rectangle(int a, int r){// this is parameterized constructor
         l=a;
         b=r;
    }
    rectangle(rectangle &r){ 
        l =r.l;
        b = r.b;
    }
};

int main(){
    rectangle r2(3,7);
    cout<<r2.l<<endl;
    cout<<r2.b<<endl;

    cout<<"output of copy constructor"<<endl;
    rectangle r3 = r2;
    cout<<r3.l<<endl;
    cout<<r3.b<<endl;
}