#include<iostream>
#include<vector>
#include<set>
#include<bits/stdc++.h>
using namespace std;
vector<int> bfs(vector<vector<int>> &adj) {
    if(adj.empty()) return{};
    int V=adj.size();
    vector<int> v(V,0);
    v[0]=1;
    queue<int> q;
    q.push(0);
    vector<int> ans;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        ans.push_back(node);
        for(auto i:adj[node]){
            if(!v[i]){
                v[i]=1;
                q.push(i);
            }
        }
    }
    return ans;
}