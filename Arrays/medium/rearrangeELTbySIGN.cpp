#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//tc=O(n)
//sc=O(n)
vector<int> alternateNumbers(vector<int>&a) {
    int n=a.size();
    int k=0,j=1;
    vector<int> temp(n);
    for(int i=0;i<n;i++){
        if(a[i]>0){
           temp[k]=a[i];
           k+=2;
        }
        else{
           temp[j]=a[i];
           j+=2;
        }
    }
    return temp;
}
//tc=O(2n)
//sc=O(n)
// vector<int> alternateNumbers(vector<int>&a) {
//     int n=a.size();
//     int pos[n/2],neg[n/2];
//     int k=0,j=0;
//     for(int i=0;i<n;i++){
//         if(a[i]>0){
//             pos[k]=a[i];
//             k++;
//         }
//         else{
//             neg[j]=a[i];
//             j++;
//         }
//     }
//     k=0;
//     j=0;
//     for(int i=0;i<n/2;i++){
//       a[2*i]=pos[i];
//       a[2*i+1]=neg[i];
//     }
//     return a;
// }
int main(){
    vector<int> a={-1,-2,-4,1,2,3};
    alternateNumbers(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" "
    }
}