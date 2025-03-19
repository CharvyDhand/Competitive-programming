#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& a) {
    int n= a.size();
    sort(a.begin(),a.end());
    vector<vector<int>> v;
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        if (i != 0 && a[i] == a[i - 1]) continue;
        int k=n-1;
        int j=i+1;
        while(j<k){
        int sum=a[i]+a[j]+a[k];
        if(sum>0){
            k--;
        }
        else if(sum<0){
            j++;
        }
        else{
             v.push_back({a[i], a[j], a[k]});
            j++;
            k--;
            while(j<k && a[j]==a[j-1]) j++;
            while(j<k && a[k]==a[k+1])  k--;
        }
    }}
    return v;
}
//brute 
// vector<vector<int>> threeSum(vector<int>& a) {
//     int n= a.size();
//     sort(a.begin(),a.end());
//     vector<vector<int>> v;
//     for(int i=0;i<n;i++){
//         if (i > 0 && a[i] == a[i - 1]) continue;
//         for(int j=i+1;j<n;j++){
//             if (j > 1+i && a[j] == a[j - 1]) continue;
//             for(int k=j+1;k<n;k++){
//             if (k >j+1 && a[k] == a[k - 1]) continue;
//               if(a[k]+a[j]+a[i]==0){
//                 vector<int> temp = {a[i], a[j], a[k]};
//                 sort(temp.begin(), temp.end());
//                 v.push_back(temp);
//               }
//             }
//         }
//     }
//     sort(v.begin(),v.end());
//     return v;
// }
int main(){
    vector<int> matrix1={1,0,-1,3,7,-10}; 
    vector<vector<int>> ans=threeSum(matrix1);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}