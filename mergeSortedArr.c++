#include<iostream>
#include<vector>
using namespace std;

int main(){

    //merge 2 sorted array
    vector<int> arr1={1,2,3};
    vector<int> arr2={2,5,6};
    int m=arr1.size();
    int n=arr2.size();

    vector<int> arr3(m+n);
   

    int index=0;
    int i=0;
    int j=0;
    while(i<m && j<n){
       if(arr1[i]<=arr2[j]){
        arr3[index++]=arr1[i++];
       }
       else{
        arr3[index++]=arr2[j++];
        
       }
    }
while (i < m) {
        arr3[index++] = arr1[i++];
    }

    // 3. Catch any remaining elements in arr2
    while (j < n) {
        arr3[index++] = arr2[j++];
    }
    for(int val: arr3){
        cout<<val<<" ";
    }

}