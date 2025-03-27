#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int>& nums) {
	unordered_map<int,int> mpp;
	int temp=(nums.size()/3)+1;
	int elt1=INT_MIN,elt2=INT_MIN,c1=0,c2=0;
	vector<int> ans;
	for(int i=0;i<nums.size();i++){
	  if(c1==0 && nums[i]!=elt2){
		c1++;
		elt1=nums[i];
	  }
	  else if(c2==0 && nums[i]!=elt1){
		c2++;
		elt2=nums[i];
	  }
	  else if(nums[i]==elt1){
		c1++;
	  }
		else if(nums[i]==elt2){
		c2++;
	  }
	  else{
	  c2--;
	  c1--;
	  }
	}
	int count1=0,count2=0;
	for(int i=0;i<nums.size();i++){
		if(nums[i]==elt1){
			count1++;
		}
		if(nums[i]==elt2){
			count2++;
		}
	}
	if(count1>=temp){
	   ans.push_back(elt1);
	}
	   if(count2>=temp){
	   ans.push_back(elt2);
	}
	return ans;

}
vector<int> majorityElement2(vector<int> v) {
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
vector<int> majorityElement1(vector<int>& nums) {
	unordered_map<int,int> mpp;
	int temp=(nums.size()/3)+1;
	vector<int> ans;
	for(int i=0;i<nums.size();i++){
		mpp[nums[i]]++;
		if(mpp[nums[i]]==temp){
			ans.push_back(nums[i]);
		}
		if(ans.size()==2){
			return ans;
		}
	}
	return ans;

}
int main(){
    vector<int> arr={1,2,3,4,1,2,5};
    vector<int> ans=majorityElement(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}