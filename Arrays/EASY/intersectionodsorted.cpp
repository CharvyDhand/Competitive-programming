#include<iostream>
#include<vector>
#include<set>
#include<bits/stdc++.h>
using namespace std;
vector<int> optimal(vector<int>)
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
   vector<int> set=optimal(a,b);
   for(int i=0;i<set.size();i++){
    cout<<set[i]<<" ";
   }
}