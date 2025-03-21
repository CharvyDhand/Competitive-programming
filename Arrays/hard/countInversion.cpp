#include<vector>
#include<bits/stdc++.h>
using namespace std;
int inversionCount(vector<int> &arr) {
    int count=0;
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<int> arr={2,4,1,3,5};
    cout<<inversionCount(arr);
}