#include<vector>
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& a, int m, vector<int>& nums2, int n) {
    int i=m-1;
    int k=m+n-1;
    int j=n-1;
    while(i>=0 && j>=0){
        if(a[i]>=nums2[j]){
          a[k]=a[i];
          k--;
          i--;
        }
        else{
            a[k]=nums2[j];
            k--;
            j--;
        }
    }
    while (j >= 0) {
        a[k--] = nums2[j--];
    }
 
}
int main(){
    vector<int> a={1,2,3};
    vector<int> b={2,5,6};
    merge(a,3,b,3);
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
}