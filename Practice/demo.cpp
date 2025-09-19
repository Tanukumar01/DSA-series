// // // // #include<bits/stdc++.h>
// // // // using namespace std;

// // // // int main(){
// // // //    string words[2] = {"d","g"};
// // // //    int arr[2] = {0,1};
// // // //    vector<string>result;

// // // //    for(int i = 1; i<2; i++){
// // // //       if(arr[i]!=arr[i-1]){
// // // //          result.push_back(words[i-1]);
// // // //          result.push_back(words[i]);
// // // //       }else{
// // // //          continue;
// // // //       }
// // // //    }
// // // //    for(int j = 0; j<2; j++){
// // // //       cout<<result[j]<<" ";
// // // //    }
// // // //    return 0;
// // // // }

// // // // //          
// // // // //         int j = 1;
// // // // //         int size = words.size()-1;
// // // // //         vector<string>result;
// // // // //         if (words.empty() || groups.empty() || words.size() != groups.size())
// // // // //         return result;

// // // // //         result.push_back(words[0]);
// // // // //         while(i<size && j<size){
// // // // //            if(words[i]!=words[i-1]&& groups[j]!=groups[j-1]){
// // // // //             result.push_back(words[i]);
             
// // // // //            }else if (words[i]!=words[i-1]&& groups[j]!=groups[j-1] && size == 2){
// // // // //                   result.push_back(words[i]);
// // // // //            }
// // // // //           i++;
// // // // //           j++;
 
// // // // //         }
// // // // //         return result;
// // // // //     }

// // // // #include<bits/stdc++.h>
// // // // using namespace std;

// // // // int solution(){
// // // //   int n;
// // // //   cin>> n;
// // // //   long long fact = 1;
// // // //  for(int i = 1; i<=n; i++){
// // // //      fact = i*fact;
// // // //  }
// // // //  return fact;
// // // // }

// // // // int main(){
// // // //    cout<<solution();
// // // //    return 0;
// // // // }


// // // #include<bits/stdc++.h>
// // // using namespace std;

// // // string genrateNumber(string pattern){

// // //    if(pattern.size() == 0){
// // //       return "string is very small";
// // //    }
// // //    if(pattern.size() >8){
// // //       return "string size is very long";

// // //    }
// // //    string result = "";
// // //    int size = pattern.size();
// // //    stack<int>st;

// // //    for(int i = 0; i<size; i++){
// // //       st.push(i+1);

// // //       if(i==size||pattern[i]=='I'){
// // //          while(!st.empty()){
// // //             result+= to_string(st.top());
// // //             st.pop();
// // //          }
// // //       }
// // //    }
// // //    return result;

// // // }
// // // int main(){
// // //    string pattern = "IDIDI";
// // //    cout<< genrateNumber(pattern);
// // //    return 0;
// // // }

// // #include<iostream>
// // #include<unordered_set>

// // using namespace std;

// // int longestQueneString(string s){

// // unordered_set<char>seen;
// // int left = 0, right = 0, maxLen = 0;

// // while(right < s.length()){
// //    if(seen.find(s[right])==seen.end()){
// //       seen.insert(s[right]);
// //       maxLen = max(maxLen, right-left+1);
// //       right++;
// //    }else{
// //       seen.erase(s[left]);
// //       left++;
// //    }
// // }
// // return maxLen;
// // }

// // int main(){
// //    string s = "abcabcbb";
// //    cout<<"The longest quene Substring is : "<<longestQueneString(s);
// // }


// #include<iostream>
// #include<unordered_set>

// using namespace std;

// int lenghtOfLongestString(string s ){
// int left = 0, right =0, maxLen = 0;
// unordered_set<char>seen;

//       while(right < s.length()){
//          if(seen.find(s[right]) == seen.end()){
//             seen.insert(s[right]);
//             maxLen = max(maxLen, right-left+1);
//             right++;
//          }else{
//            seen.erase(s[left]);
//            left++;
//          }
//       }
//       return maxLen;
// }
// int main(){
//  string s = "abcabcbb";
//  cout<<lenghtOfLongestString(s);
// }

#include<bits/stdc++.h>
using namespace std;

int main(){

   for(int i =0 ; i<=3; i++){
      for(int j = 0; j<=3; j++){
         cout<<" "<<"*";
      }
      cout<<endl;
   }
   return 0;
}