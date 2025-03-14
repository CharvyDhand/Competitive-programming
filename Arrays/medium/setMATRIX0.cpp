#include<bits/stdc++.h>
using namespace std;
#include<vector>
void setZeroes(vector<vector<int>>& a) {
    int m = a.size();
    if (m == 0) return;
    int n = a[0].size();

    int col = 1;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 0) {
                a[i][0] = 0;
                if (j != 0) {
                    a[0][j] = 0;
                } else {
                    col = 0;
                }
            }
        }
    }
   for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (a[i][0] == 0 || a[0][j] == 0) {
                a[i][j] = 0;
            }
        }
    } 
    if (a[0][0] == 0) {
        for (int j = 0; j < n; j++) {
            a[0][j] = 0;
        }
    }
    if (col == 0) {
        for (int i = 0; i < m; i++) {
            a[i][0] = 0;
        }
    }
}
//better
// void setZeroes(vector<vector<int>>& a) {
//     int m = a.size();
//     if (m == 0) return;
//     int n = a[0].size();
//     vector<int> row(m, 0);
//     vector<int> col(n, 0);
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             if (a[i][j] == 0) {
//                 row[i]=1;
//                 col[j]=1;
//             }
//         }
//     }
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             if (row[i]|| col[j]) {
//                 a[i][j] = 0;
//             }
//         }
//     }
// }
//brute
// void setZeroes(vector<vector<int>>& a) {
//     int m = a.size();
//     if (m == 0) return;
//     int n = a[0].size();
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             if (a[i][j] == 0) {
//                 for (int col = 0; col < n; col++) {
//                     if (a[i][col] != 0) {
//                         a[i][col] = -1;
//                     }
//                 }
//                 for (int row = 0; row < m; row++) {
//                     if (a[row][j] != 0) {
//                         a[row][j] = -1;
//                     }
//                 }
//             }
//         }
//     }
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             if (a[i][j] == -1) {
//                 a[i][j] = 0;
//             }
//         }
//     }
// }
int main(){
    vector<vector<int>> matrix1 = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };
    setZeroes(matrix1);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
}