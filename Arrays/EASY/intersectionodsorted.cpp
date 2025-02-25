#include<iostream>
#include<vector>
#include<set>
#include<bits/stdc++.h>
using namespace std;
vector<int> intersectionOfArrays(vector<int>A, vector<int>B){
    
    vector <int> ans;
    
    // to maintain visited
    vector <int> visited(B.size(), 0);  
    int i = 0, j = 0;
    
    for (i = 0; i < A.size(); i++) {
        
      for (j = 0; j < B.size(); j++) {
  
        if (A[i] == B[j] && visited[j] == 0) { 
        
          //if element matches and has not been matched with any other before
          ans.push_back(B[j]);
          visited[j] = 1;
  
          break;
        } 
        
        else if (B[j] > A[i]) break; 
        //because array is sorted , element will not be beyond this
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
  
   vector<int> ans = intersectionOfArrays(a,b);
  
   for (int i = 0; i < ans.size(); i++) {
     cout << ans[i] << " ";
   }
}