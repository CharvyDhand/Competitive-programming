#include<iostream>
#include<vector>
using namespace std;
// int missingNumber(vector<int>&a, int n) {
//     int sum=(n*(n+1))/2;
//     int s=0;
//     for(int i=0;i<n-1;i++){
//         s=s+a[i];
//     }
//     return sum-s;
// }
int missingNumber(vector<int>&a, int n) {
    int n=a.size();
    long xor1=0;
long xor2=0;
for(int i=0;i<n;i++){
   xor2^=a[i];
}
for(int i=0;i<n+1;i++){
   xor1^=i;
}
return xor1^xor2;
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
    int result=missingNumber(a,n);
    cout<<result;
}