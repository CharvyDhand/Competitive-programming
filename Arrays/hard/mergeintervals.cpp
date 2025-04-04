#include<iostream>
#include<vector>
using namespace std;
#include<bits/stdc++.h>
vector<vector<int>> merge(vector<vector<int>>& a) {
    int n=a.size();
    sort(a.begin(),a.end());
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
      if(ans.empty() || ans.back()[1]<a[i][0]){
        ans.push_back(a[i]);
      }
      else{
        ans.back()[1]=max(ans.back()[1],a[i][1]);
      }
    }   
    return ans;
}
vector<vector<int>> merge(vector<vector<int>>& a) {
    int n=a.size();
    int m=a[0].size();
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        int start=a[i][0];
        int end=a[i][1];
        if(!ans.empty() && end<=ans.back()[1]){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(end>=a[j][0]){
               end=max(a[j][1],end);
            }
            else{
                break;
            }
        }
        ans.push_back({start,end});
    }   
    return ans;
}