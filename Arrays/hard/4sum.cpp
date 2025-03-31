#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int>& a, int target) {
    int n=a.size();
    sort(a.begin(),a.end());
    vector<vector<int>> ans;
    for(int i=0;i<n-3;i++){
       if(i>0 && a[i]==a[i-1]) continue;
      for(int j=i+1;j<n-2;j++){
          if(j>i+1 && a[j]==a[j-1]) continue;
          int k=j+1;
          int l=n-1;
          while(k<l){
              long long sum=a[i]+a[j];
              sum+=a[k];
              sum+=a[l];
              if(sum==target){
                  ans.push_back({a[i],a[j],a[k],a[l]});
                  k++;
                  l--;
              while(k<l && a[k]==a[k-1]) k++;
              while(k<l && a[l]==a[l+1])  l--;
              }
              else if(target>sum){
                  k++;
              }
              else{
                l--;
              }
          }
      }
    }
    return ans;
  }
int main(){
    vector<int> a={1,2,3,4,5};
}