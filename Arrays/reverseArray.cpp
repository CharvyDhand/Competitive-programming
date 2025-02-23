#include<iostream>
#include<vector>
using namespace std;
void Reverse(vector<int>& a,int s, int e){
   while(s<=e){
    int temp=a[s];
    a[s]=a[e];
    a[e]=temp;
    s++;
    e--;
   }
}
int main(){
    int n;
    cout<<"Enter array size:";
    cin>>n;
    vector<int> a(n);
    vector<int> temp(n);
    cout<<"Enter elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Reverse(a,0,n-1);
    // for(int i=0;i<n;i++){
    //     temp[i]=a[n-1-i];
    // }
    // for(int i=0;i<n;i++){
    //     a[i]=temp[i];
    // }
    cout<<"after reversing:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}