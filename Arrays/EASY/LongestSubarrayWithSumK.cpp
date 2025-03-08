#include<iostream>
#include<vector>
#include<set>
#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n = a.size();
    int left = 0, right = 0; 
    long long sum = a[0];
    int maxLen = 0;
    while (right < n) {
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }
         if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n)
            sum += a[right];
    }
    return maxLen;
}
//brute with o(n^2)
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n=a.size();
    int length=0;
     for(int i=0;i<n;i++){
          long long s=0;
        for(int j=i;j<n;j++){
                s+=a[j];
                if(s==k){
                    length=max(length,j-i+1);
                }
        }
     }
     return length;
}
//brute with o(n^3)
// int longestSubarrayWithSumK(vector<int> a, long long k) {
//     int n=a.size();
//     int length=0;
//      for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             long long s=0;
//             for(int l=i;l<=j;l++){
//                 s+=a[l];
//             }
//                 if(s==k){
//                     length=max(length,j-i+1);
//                 }
//         }
//      }
//      return length;
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
    cout<<"enter value for k";
    long long k;
    cin>>k;
    int result=longestSubarrayWithSumK(a,k);
    cout<<result;
}
