#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//optimal solution
int main(){
    int a[6],n,d;
    cout<<"enter Array size: ";
    cin>>n;
    cout<<"enter array elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter d place to rotate:";
    cin>>d;
    d=d%n;
    //d=d-n;   to rotate right 
    reverse(a,a+d);
    reverse(a+d,a+n);
    reverse(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}




//brute approach
//TC= O(d+n-d+d)=O(n+d)
//extra space= O(d)
// int main(){
//     int a[6];
//     int n,d;
//     cout<<"Enter size of array:";
//     cin>>n;
//     cout<<"Enter array element";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int temp[5];
//     cout<<"Enter d places:";
//     cin>>d;
//     d=d%n;
//     for(int i=0;i<d;i++){
//         temp[i]=a[i];
//     }
//     for(int i=d;i<n;i++){
//         a[i-d]=a[i];
//     }
//     int j=0;
//     for(int i=n-d;i<n;i++){
//         a[i]=temp[j];    //temp[i-(n-d)]
//         j++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }