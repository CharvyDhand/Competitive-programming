#include<bits/stdc++.h>
using namespace std;
#include<vector>
vector<int> spiralOrder(vector<vector<int>>& a) {
    int n= a.size();
    int m=a[0].size();
    int left=0,right=m-1,top=0,bottom=n-1;
    int j=0;
    vector<int> ans(n*m);
    while(top<=bottom && left<=right){
    for(int i=left;i<=right;i++){
         ans[j]=a[top][i];
         j++;
    }
    top++;
    for(int i=top;i<=bottom;i++){
        ans[j]=a[i][right];
        j++;
    }
    right--;
    if (top <= bottom) {
    for(int i=right;i>=left;i--){
         ans[j]=a[bottom][i];
        j++;
    }
    }
    bottom--;
    if (left <= right) {
    for(int i=bottom;i>=top;i--){
         ans[j]=a[i][left];
        j++;
    }
    }
    left++;
}
return ans;
}
int main(){
    vector<vector<int>> matrix={
        {1,2,3},{4,5,6},{7,8,9}
    };
    vector<int> result=spiralOrder(matrix);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

}