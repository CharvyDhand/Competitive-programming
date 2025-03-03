#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    int n= nums.size();
    int right=n-1;
    int left=0;
        while(left<right){
            sort(nums.begin(),nums.end());
            int sum=nums[left]+nums[right];
             if(sum==target){
                return {left,right};
             }
             else if(sum<target){
                left++;
             }else{
             right--;
             }
        }
        return {-1,-1};
    }
//better approach 
// vector<int> twoSum(vector<int>& nums, int target) {
//     int n= nums.size();
//     map<int,int> mpp;
//     for(int i=0;i<n;i++){
//         int num=nums[i];
//         int rem=target-num;
//         if(mpp.find(rem)!=mpp.end()){
//             return {mpp[rem],i};
//         }
//           mpp[num]=i;
//         }
//         return {-1,-1};
//     }
//brute with almost o(n^2) complexity
// vector<int> twoSum(vector<int>& nums, int target){
//     vector<int> v(2,-1);
//     for(int i=0;i<nums.size();i++){
//         for(int j=i+1;j<nums.size();j++){
//             if((nums[j]+nums[i])==target){
//                 v[0]=i;
//                 v[1]=j;
//                 return v;
//             }
//         }
//     }
//     return v;
// }
int main(){
    int n;
    cout<<"Enter array size:";
    cin>>n;
    cout<<"enter array element:";
    vector<int> a(n);
    for(int i=0;i<n;i++){
         cin>>a[i];
    }
    int s;
    cout<<"enter element to be searched:";
    cin>>s;
    vector<int> result= twoSum(a,s);
    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }
}