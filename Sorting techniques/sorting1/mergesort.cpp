#include<bits/stdc++.h>
#include<vector> 
using namespace std;
void sorting(vector<int>& a,int l, int mid, int r){
    int n1=mid-l+1;
    int n2= r-mid;
    vector<int> left(n1);
    vector<int> right(n2);
    for(int i=0;i<n1;i++){
        left[i]=a[i+l];
    }
    for(int i=0;i<n2;i++){
        right[i]=a[mid+i+1];
    }
    int i=0,j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            a[k]=left[i];
            i++;
        }else{
            a[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=left[i];
        k++;
        i++;
    }
    while(j<n2){
        a[k]=right[j];
        k++;
        j++;
    }
  }
void mergeSort(vector<int>& arr, int l, int r) {
    if(l>=r){
        return;
    }
    int mid= (l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    sorting(arr,l,mid,r);
}
int main(){
    vector<int> arr={2,5,1,7,3,4};
    int n=arr.size();
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
}