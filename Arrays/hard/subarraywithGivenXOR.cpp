#include<iostream>
#include<vector>
#include<set>
#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &A, int B) {
    int count=0;
    int n=A.size();
  for(int i=0;i<n;i++){
      int temp=0;
      for(int j=i;j<n;j++){
          temp^=A[j];
          if(temp==B){
              count++;
          }
      }
  }
  return count;
}

int subarraysXor(vector<int> &A, int B)
{
    int count=0;
    int n=A.size();
    int xr=0;
    unordered_map<int,int> mpp;
    mpp[xr]++; 
     for(int i=0;i<n;i++){
       xr=xr^A[i];
       int x=xr^B;
       count+=mpp[x];
       mpp[xr]++;
    }
    return count;
}
int main(){
    vector<int> array={4,2,2,6,4};
    cout<<solve(array,6);
    cout<<subarraysXor(array,6);
}