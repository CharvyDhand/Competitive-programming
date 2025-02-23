#include<iostream>
using namespace std;
//0(n)
int main(){
    int a[6];
    int n;
    cout<<"Enter array size:";
    cin>>n;
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1]){
        }
        else{
            cout<<"not sorted";
            return false;
        }
    } 
    cout<<"sorted"; 
    return true; 
}