#include<bits/stdc++.h>
using namespace std;
#include<vector> 
int partition(vector<int>& arr, int low, int high) {
    int pivot=arr[high];
  int i=low-1;
  for(int j=low;j<high;j++){
      if(arr[j]<pivot){
          i++;
          swap(arr[i],arr[j]);
      }
  }
  swap(arr[i+1],arr[high]);
  return i+1; 
}
void quickSort(vector<int>& arr, int low, int high) {
    if(low<high){
       int pi=partition(arr,low,high);
       quickSort(arr,low,pi-1);
       quickSort(arr,pi+1,high);
   }
}
int main(){
    vector<int> a={2,15,7,1,8,9,0};
    quickSort(a,0,a.size()-1);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}