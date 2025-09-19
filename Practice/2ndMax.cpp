// #include<bits/stdc++.h>

// using namespace std;
// int secondMax(vector<int>nums){
//     int max1 = INT_MIN;
//     int max2 = INT_MIN;
//     int size = nums.size();
    
//     for(int i =0; i<size; i++){
//         if(nums[i]>max1){
//             max1 = max(nums[i],max1);
//         }
//         else if(nums[i]>max2 && nums[i]<max1){
//             max2 = max(nums[i],max2);
//         }
//     }
//     return max2;
   
// }
// int main(){
//    vector<int>nums = {8,8,8,7,6,5};
//    cout<<"second max : "<<secondMax(nums)<<endl;


//    return 0;

// }

// approach - 2 optimal 
#include<bits/stdc++.h>

using namespace std;
int secondMax(vector<int>nums){
    int largetEle = nums[0];
    int slargetEle = -1;
    int size = nums.size();
    
    for(int i =0; i<size; i++){
        if(nums[i]>largetEle){
            largetEle  = nums[i];
            slargetEle = largetEle;
        }
       else if(nums[i]<largetEle && nums[i]>slargetEle){
           slargetEle = nums[i];
       }
    }
    return slargetEle;
   
}
int main(){
   vector<int>nums = {8,8,8,7,6,5};
   cout<<"second max : "<<secondMax(nums)<<endl;


   return 0;

} 