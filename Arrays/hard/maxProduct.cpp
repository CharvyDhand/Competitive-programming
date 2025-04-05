#include<vector>
#include<bits/stdc++.h>
using namespace std;
int maxProductoptimize(vector<int>& a) {
    long long n=a.size();
    if(n==0) return 0;
    long long ans=a[0];
    long long  p=1;
    long long  d=1;
    for(int i=0;i<n;i++){
     if(p==0) p=1;
     if(d==0) d=1;
     p*=a[i];
     d*=a[n-1-i];
     ans=max(ans,max(p,d));
    }
    return ans; 
}
int maxProduct(vector<int>& nums) {
    int ans=INT_MIN;
    for(int i=0;i<nums.size();i++){
        int mul=1;
        for(int j=i;j<nums.size();j++){
            mul*=nums[j];
            ans=max(ans,mul);
        }
    }
    return ans; 
}
int main(){
    vector<int> array={2,3,-2,4};
    cout<<maxProduct(array);
}