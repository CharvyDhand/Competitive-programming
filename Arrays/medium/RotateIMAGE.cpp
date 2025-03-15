#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
//optimal
void rotate(vector<vector<int>>& a) {
    int n= a.size();
    int m=a[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
        swap(a[i][j],a[j][i]);
    }
}
for(int i=0;i<n;i++){
   reverse(a[i].begin(),a[i].end());
}
}
//brute 
// void rotate(vector<vector<int>>& a) {
//     int n= a.size();
//     int m=a[0].size();
//     vector<vector<int>> temp(m, vector<int>(n));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//         temp[j][n-1-i]=a[i][j];
//     }
// }
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         a[i][j]=temp[i][j];
//     }
// }
// }
int main(){
    vector<vector<int>> matrix={
        {1,2,3},{4,5,6},{7,8,9}
    };
    rotate(matrix);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}