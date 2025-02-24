#include<iostream>
#include<vector>
#include<set>
#include<bits/stdc++.h>
using namespace std;
//optimal solution
//time complexity= o(n+m)
//space=o(n+m)   //to return the value 
vector<int> optimal(vector<int> a, vector<int> b){
    vector<int> uniona;
    int i=0;
    int j=0;
    int n=a.size();
    int m=b.size();
    while(i<n && j<m){
        if (a[i] < b[j]) { 
            if (uniona.empty() || uniona.back() != a[i]) {
                uniona.push_back(a[i]);
            }
            i++;
        } 
        else if (b[j] < a[i]) {
            if (uniona.empty() || uniona.back() != b[j]) {
                uniona.push_back(b[j]);
            }
            j++;
        } 
        else { // When a[i] == b[j]
            if (uniona.empty() || uniona.back() != a[i]) {
                uniona.push_back(a[i]);
            }
            i++;
            j++;
        }
    }

    // Add remaining elements from a
    while (i < n) {
        if (uniona.empty() || uniona.back() != a[i]) {
            uniona.push_back(a[i]);
        }
        i++;
    }

    // Add remaining elements from b
    while (j < m) {
        if (uniona.empty() || uniona.back() != b[j]) {
            uniona.push_back(b[j]);
        }
        j++;
    }

     return uniona;
}
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
//BRUTE 
//TIME COMPLEXITY=O(N1LOGN+N2LOGN)+O(N1+N2)
//SPACE COMPLEXITY=O(N1+N2)   using it to return the ans
// vector<int> brute(vector<int> a,vector<int> b){
//     set<int> st;
//     for(int i=0;i<a.size();i++){
//         st.insert(a[i]);  
//     }
//     for(int i=0;i<b.size();i++){
//         st.insert(b[i]);  
//     }
//     vector<int> unionSet;  // Corrected variable name
//     for (auto it : st) {
//         unionSet.push_back(it); // Corrected insertion method
//     }
//     return unionSet;
// }