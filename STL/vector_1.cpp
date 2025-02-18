// // #include<bits/stdc++.h>
// // //#include<vector>

// // using namespace std;
// // int main(){
// //     vector<int> arr;

// //     arr.push_back(1);
// //     arr.push_back(4);
// //     arr.push_back(6);
// //     arr.push_back(0);
// //  for(int vlaue:arr){
// //     cout<<" "<<vlaue;
// //     cout<<endl;

// //  }cout<<arr.size()<<endl;
// //  cout<<arr.capacity()<<endl;
// //  cout<<arr.front()<<endl;
// //  cout<<arr.back();
// //  return 0;
// // }

// #include<bits/stdc++.h>

// using namespace std;

// int main(){


//     vector<int> vec(5,4);

//     for(int value : vec){
//         cout<<value;
//     }
// }

#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    
    vec.erase(vec.begin()+1);
for(int valu:vec){
    cout<<valu;

}

return 0;
}
