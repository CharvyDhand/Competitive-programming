#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size:";
    cin>>n;
    vector<int> a(n);
    vector<int> temp(n);
    cout<<"enter array element:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            temp[j]=a[i];
            j++;
        }
    }
    for(int i=0;i<j;i++){
        a[i]=temp[i];
    }
    for(int i=n-j;i<n;i++){
        a[i]=0;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}