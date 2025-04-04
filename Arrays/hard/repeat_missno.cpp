#include<iostream>
#include<vector>
using namespace std;
#include<bits/stdc++.h>
     vector<int> findTwoElement(vector<int>& a) {
          int n=a.size();
         int sum=(n*(n+1))/2;
          int repeat=0;
          int count=a[0];
          sort(a.begin(),a.end());
          for(int i=1;i<n;i++){
            if(a[i-1]==a[i]){
                repeat=a[i];
            }
            count+=a[i];
          }
          int miss=sum-(count-repeat);
          return {repeat,miss};
      }
      vector<int> findTwoElement(vector<int>& a) {
        long long n = a.size(); // size of the array

        // Find Sn and S2n:
        long long SN = (n * (n + 1)) / 2;
        long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;
    
        // Calculate S and S2:
        long long S = 0, S2 = 0;
        for (int i = 0; i < n; i++) {
            S += a[i];
            S2 += (long long)a[i] * (long long)a[i];
        }
    
        //S-Sn = X-Y:
        long long val1 = S - SN;
    
        // S2-S2n = X^2-Y^2:
        long long val2 = S2 - S2N;
    
        //Find X+Y = (X^2-Y^2)/(X-Y):
        val2 = val2 / val1;
    
        //Find X and Y: X = ((X+Y)+(X-Y))/2 and Y = X-(X-Y),
        // Here, X-Y = val1 and X+Y = val2:
        long long x = (val1 + val2) / 2;
        long long y = x - val1;
    
        return {(int)x, (int)y};
    }
int main(){
    vector<int> array={1,3,3,2,4};
    vector<int> ans=findTwoElement(array);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}
  