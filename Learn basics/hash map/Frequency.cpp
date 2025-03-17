#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
vector<int> frequencyCount(vector<int>& arr) {
    int n=arr.size();
    map <int,int> order;
    for(int i=0;i<arr.size();i++){
        order[arr[i]]+=1;
    }
   vector<int> ans(n);
   for(int i=1;i<=n;i++){
       ans[i-1]=order[i];
   }
   return ans;
}
int main(){
    vector<int> arr={1,2,3,4,1,2,5};
    vector<int> ans=frequencyCount(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}