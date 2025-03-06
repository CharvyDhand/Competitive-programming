#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& a) {
          int n=a.size();
          for(int i=0;i<n;i++){
              for(int j=i;j<n;j++){
                  if(a[j]<a[i]){
                      int temp=a[i];
                      a[i]=a[j];
                      a[j]=temp;
                  }
              }
          }
}
int main(){
    vector<int> a={-1,-2,-4,1,2,3};
    bubbleSort(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
