#include<iostream>
#include<vector>
using namespace std;
int consecutiveOnes(vector<int>& arr){
    int maxi=0;
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            count++;
            maxi=max(count,maxi);
        }
        else{
            count=0;
        }
    }
    return maxi;
}
int main(){
    int n;
    cout<<"Enter array size:";
    cin>>n;
    cout<<"enter array element:";
    vector<int> a(n);
    for(int i=0;i<n;i++){
         cin>>a[i];
    }
    int result=consecutiveOnes(a);
    cout<<result;
}