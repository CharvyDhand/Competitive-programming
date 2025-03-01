#include<iostream>
#include<vector>
#include<set>
#include<bits/stdc++.h>
using namespace std;
//brute '/p aq-/*-+*9.
// ,m bncvx67ty~ o(n^3)
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
