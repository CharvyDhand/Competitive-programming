#include<vector>
#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& a , int target) {
    int n=a.size();
    if(n==0) return 0;
         int start=0;
         int end=n-1;
         int ans=-1;
         if(a[end]<target) return n;
         if(a[start]>target) return 0;
         while(start<=end){
         int mid = start + (end - start) / 2;
         if(a[mid]>=target){
             ans=mid;
             end=mid-1;
         }
         else{
             start=mid+1;
         }
     }
     return ans;
     }
int searchInsert(vector<int>& nums, int target) {
    int n=nums.size();
    int temp=-1;
    if(target<nums[0]){
       int temp=0;
       return temp;
    }
    if(target>nums[n-1]){
       return n;
    }
    for(int i=0;i<n;i++){
       if(nums[i]>=target){
           return i;
       }
    }
   return temp;
   }