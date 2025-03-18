#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>& a, int k) {
    int n=a.size();
    unordered_map<int,int> mpp;
    mpp[0]=1;
    int count=0,prefix=0;
    for(int i=0;i<n;i++){
       prefix+=a[i];
       int remove=prefix-k;
       count+=mpp[remove];
       mpp[prefix]+=1;
    }
    return count;
}
// int subarraySum(vector<int>& a, int k) {
//     int n=a.size();
//     int temp=a[0];
//     int count=0;
//     for(int i=1;i<n;i++){
//         temp+=a[i];
//        if(temp>k){
//             temp=a[i];
//         }
//         if(temp==k){
//             count++;
//             temp=a[i];
//         }
//     }
//     return count;
// }
int main(){
    vector<int> a={1,1,1};
    cout<<subarraySum(a,2);
}