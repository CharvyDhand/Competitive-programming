#include<iostream>
#include<vector>
using namespace std;
int optimal(vector<int> a,int n,int search){
   for(int i=0;i<n;i++){
    if(a[i]==search){
        return i;
    }
   } 
   return -1;
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
    int s;
    cout<<"enter element to be searched:";
    cin>>s;
    int result=optimal(a,n,s);
    cout<<result;
}