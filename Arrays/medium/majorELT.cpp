#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>
int majorityElement(vector<int> a) {
	int n=a.size();
	int temp=int(n/2);
	int elt=0,count=0;
	for(int i=0;i<n;i++){
		if(count==0){
			count++;
			elt=a[i];
		}
		else if(elt==a[i]){
			count++;
		}
		else 
		count--;
	}
	int count2=0;
	for(int i=0;i<n;i++){
		if(a[i]==elt){
			count2++;
		}
	}
	if(count2>temp){
		return elt;
	}
	return 0;
}
// better 
// int majorityElement(vector<int> a) {
// 	int n=a.size();
// 	int temp=int(n/2);
// 	map<int,int> mpp;
// 	for(int i=0;i<n;i++){
// 		mpp[a[i]]++;
// 	}
// 	for(auto it:mpp){
// 		if(it.second>temp){
// 			return it.first;
// 		}
// 	}
// 	return 0;
// }
// brute
// int majorityElement(vector<int> a) {
// 	int n=a.size();
// 	int temp=int(n/2);
// 	for(int i=0;i<n;i++){
// 		int count=0;
// 		for(int j=0;j<n;j++){
// 			if(a[j]==a[i]){
// 				count++;
// 			}
// 		}
// 		if(count>temp){
// 			return a[i];
// 		}
// 	}
// 	return 0;
// }
int main(){
    vector<int> a={1,2,3,2,2,2,3};
    int result=majorityElement(a);
    cout<<result;
}