#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr) {
    for(int i=0;i<arr.size();i++){
        int min=i;
        for(int j=i;j<arr.size();j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        } int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
    }
}
int main(){
    vector<int> a={-1,-2,-4,1,2,3};
    selectionSort(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}