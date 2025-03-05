#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>
int maxSubArray(vector<int>& nums) {
    int max=INT_MIN,sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum>max){
         max=sum;
        }
        if(sum<0){
         sum=0;
        }
    }
    return max;
 }
 int main(){
 vector<int> a={1,2,3,2,2,2,3};
 int result=maxSubArray(a);
 cout<<result;
}