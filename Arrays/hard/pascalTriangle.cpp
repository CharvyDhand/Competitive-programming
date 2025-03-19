#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> a(numRows);
    for(int i=0;i<numRows;i++){
         a[i].resize(i + 1);
        for(int j=0;j<=i;j++){
            if(j==0 ||j==i){
                a[i][j]=1;
            }else{
        a[i][j]=a[i-1][j-1]+ a[i-1][j];
            }
        }
    }
    return a;
}
int nCr(int n,int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return (int)(res);
}
vector<vector<int>> approach2(int num){
    vector<vector<int>> ans;
    for(int i=1;i<=num;i++){
        vector<int> temp;
        for(int j=1;j<=i;j++){
            temp.push_back(nCr(i-1,j-1));
        }
        ans.push_back(temp);
    }
    return ans;
}
int main(){
  int r=5;
//   vector<vector<int>> ans=generate(r);
vector<vector<int>> ans=approach2(r);
  for(int i=0;i<r;i++){
    for(int j=0;j<=i;j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
}