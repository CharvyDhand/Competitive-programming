#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int getLongestSubarray(vector<int>& a, int k){
   int n = a.size();
    unordered_map<int,int> mpp;
    int p=0;
    int maxlen=0;
    for(int i=0;i<n;i++){
        p+=a[i];
        if(p==k){
            maxlen=i+1;
        }
        if(mpp.find(p-k)!=mpp.end()){
            int len=i-mpp[p-k];
            maxlen=max(maxlen,len);
        }
        if(mpp.find(p)==mpp.end()){
            mpp[p]=i;
        }
    }
    return maxlen;
}
int main(){
    vector<int> arr={1,2,3,4,1,2,-5};
    int result=getLongestSubarray(arr,2);
    cout<<result;
}