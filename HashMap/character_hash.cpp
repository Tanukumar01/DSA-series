#include<iostream>

using namespace std;

int main(){
    string s;
    cout<<"Enter a String ";
    cin>>s;
    
    int hash[26] = {0};
    for(int i = 0; i<s.size(); i++){
        hash[s[i]-'a']++;
    }
 
    int q ;// enter the size of string 
    cout<<"enter the size of string ";
    cin>>q;
    while(q--){
        char c;
        cin>>c;//enter the charaacter to be searched
        //fetch
        cout<<hash[c-'a']<<endl;
    }
    return 0;
}

