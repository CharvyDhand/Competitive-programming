#include<iostream>
using namespace std;
//optimal solution 
//time complexity=o(n)
// no extra space 
int main(){
    int a[6];
    int n;
    cout<<"Enter array size:";
    cin>>n;
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
      cin>>a[i];  
    }
    int temp=a[0];
    for(int i=1;i<n;i++){
        a[i-1]=a[i];
    }
    a[n-1]=temp;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}