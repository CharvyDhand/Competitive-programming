#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int> v) {
	int n=v.size();
	int k=n/3;
	vector<int> ans;
    unordered_map<int,int> mpp;
	for(int i=0;i<n;i++){
		mpp[v[i]]+=1;
	}
	int j=0;
	for(auto i:mpp){
		if(i.second>k){
          ans.push_back(i.first); 
		}
	}
	sort(ans.begin(),ans.end());
	return ans;
}
int main(){
    vector<int> arr={1,2,3,4,1,2,5};
    vector<int> ans=majorityElement(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}