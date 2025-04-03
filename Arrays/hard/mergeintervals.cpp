#include<iostream>
#include<vector>
using namespace std;
#include<bits/stdc++.h>
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