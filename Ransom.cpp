#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string s1="aa";
    string s2="aab";
 
    unordered_map<char,int> mp;

     
    for(auto i: s2){
        mp[i]++;
    }
    cout<<"before"<<endl;
     for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    for(auto i:s1){
       mp[i]--;
    }
  cout<<"after: "<<endl;
  bool ans=true;
    for(auto i:mp){
         if(i.second<0){
            ans=false;
            break;
         }
        cout<<i.first<<" "<<i.second<<endl;
    }

if(ans){
    cout<<"true";
}
else{
    cout<<"false";
}
}