#include<iostream>

using namespace std;

int main(){

    //valid palindrome
     
    string s="A man, a plan, a canal: Panama";
    string s1="";

    //space removed
    for(int i=0;i<s.length();i++){
      if(isalnum(s[i])){
        s1+=s[i];
      }
      
    }
    //convert tham into lowercase
    for(int i=0;i<s1.length();i++){
        s1[i]=tolower(s1[i]);
    }
   


    //2 pointer approach to check palindrome
    int left=0;
    int right =s1.length()-1;
    bool isPlaindrome=true;

    while(left<=right){
      if(s1[left]!=s1[right]){
        isPlaindrome=false;
        break;
      }
      else{
        left++;
        right--;
      }
    }
cout<<endl;
    if(isPlaindrome){
        cout<<s1<<" is a palindrome"<<endl;
    }
    else{
        cout<<s1<<" is not a palindrome"<<endl;
    }
}