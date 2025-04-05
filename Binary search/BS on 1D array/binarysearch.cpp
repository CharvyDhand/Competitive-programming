#include<vector>
#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& a, int target) {
    int n=a.size();
    int start=0;
    int end=n-1;
    while(start<=end){
    int mid = start + (end - start) / 2;
    if(a[mid]==target){
        return mid;
    }
    else if(a[mid]>target){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
}
return -1;
}