#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>& a) {
    for(int i=0;i<a.size();i++){
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }a[j+1]=key;
    }
}
int main(){
    vector<int> a={-1,-2,-4,1,2,3};
    insertionSort(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
