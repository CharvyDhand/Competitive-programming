#include<vector>
#include<bits/stdc++.h>
using namespace std;
int reversePairs(vector<int>& nums) {
    int n=nums.size();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(nums[i]>2*nums[j]){
                count++;
            }
        }
    }
    return count;
}
int reversePairs(vector<int>& nums) {
    int n=nums.size();
    int count=0;
    int j=0;
    while(j<n){
    for(int i=0;i<j;i++){
       if(nums[i]>2*nums[j]) count++;
    }
    j++;
    }
    return count;
}
int main(){
    vector<int> arr={1,3,2,3,1};
    cout<<reversePairs(arr);
}