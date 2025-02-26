#include<iostream>
#include<vector>
#include<set>
#include<bits/stdc++.h>
using namespace std;
//time=o(n*m)
//space=o(m)
// vector<int> intersectionOfArrays(vector<int>A, vector<int>B){
//     vector <int> ans;
//     vector <int> visited(B.size(), 0);  
//     int i = 0, j = 0;
//     for (i = 0; i < A.size(); i++) {
//       for (j = 0; j < B.size(); j++) {
//         if (A[i] == B[j] && visited[j] == 0) { 
//           ans.push_back(B[j]);
//           visited[j] = 1;
//           break;
//         } 
//         else if (B[j] > A[i]) break; 
//       }
//     }
//     return ans;
//   }

//opyimal solution
vector<int> optimal(vector<int> a, vector<int>b){
  int j=0,i=0;
  sort(a.begin(), a.end());  
  sort(b.begin(), b.end());
vector<int> ans;
while(i<a.size() && j<b.size()){
if(a[i]<b[j]){
i++;
}
else if(b[j]<a[i]){
j++;
}
else{
if(ans.empty()|| ans.back()!=a[i]){ 
ans.push_back(a[i]);}
i++;
j++;
}
}
return ans;     
}
int main(){
    int n,m;
    cout<<"enter size of array 1 and 2:";
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    cout<<"Array 1 values:";
    for(int i=0;i<n;i++){
           cin>>a[i];
    }
    cout<<"Array 2 values:";
    for(int i=0;i<m;i++){
        cin>>b[i];
   }
   vector<int> ans = optimal(a,b);
   for (int i = 0; i < ans.size(); i++) {
     cout << ans[i] << " ";
   }
}