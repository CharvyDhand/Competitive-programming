#include<vector>
#include<bits/stdc++.h>
using namespace std;
int getLongestZeroSumSubarrayLength(vector<int> &a){
     int n=a.size();
	 int sum=0;
	 int m=0;
	 unordered_map<int,int> mpp;
	 for(int i=0;i<n;i++){
		 sum+=a[i];
		 if(sum==0){
			 m=i+1;
		 }
		 else if(mpp.find(sum)!=mpp.end()){
			 m=max(m,i-mpp[sum]);
		 }
		 else{
			 mpp[sum]=i;
		 }
	 }
	 return m;
}
int main(){
    vector<int> a={-1,1,0,0,1};
    cout<<getLongestZeroSumSubarrayLength(a);
}