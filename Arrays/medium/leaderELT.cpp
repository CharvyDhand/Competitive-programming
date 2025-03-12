#include<bits/stdc++.h>
using namespace std;
#include<vector>
vector<int> superiorElements(vector<int>&a) {
    int n=a.size();
    vector<int> ans;
    int m=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(a[i]>m){
            ans.push_back(a[i]);
            m=a[i];
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
int main(){
    vector<int> a={-1,-2,-4,1,2,3};
    vector<int> ans=superiorElements(a);
    for(int i=0;i<ans.size();i++){
        cout<<a[i]<<" ";
    }
}