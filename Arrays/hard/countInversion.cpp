#include<vector>
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& a, int low, int mid, int high) {
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    while (left <= mid && right <= high) {
        if (a[left] <= a[right]) {
            temp.push_back(a[left]);
            left++;
        } else {
            temp.push_back(a[right]);
            right++;
        }
    }
    while (left <= mid) {
        temp.push_back(a[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(a[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        a[i] = temp[i - low];
    }
}

int countpair(vector<int>& a, int low, int mid, int high) {
    int right = mid + 1;
    int count = 0;
    for (int i = low; i <= mid; i++) {
        // Fix: Use 2LL to avoid integer overflow
        while (right <= high && a[i] > 2LL * a[right]) {
            right++;
        }
        count += (right - (mid + 1));
    }
    return count;
}

int mergesort(vector<int>& a, int low, int high) {
    int count = 0;
    if (low >= high) return count;
    int mid = low + (high - low) / 2;
    count += mergesort(a, low, mid);
    count += mergesort(a, mid + 1, high);
    count += countpair(a, low, mid, high);
    merge(a, low, mid, high);
    return count;
}

int reversePairs(vector<int>& nums) {
    int n = nums.size();
    return mergesort(nums, 0, n - 1);
}
// int inversionCount(vector<int> &arr) {
//     int count=0;
//     for(int i=0;i<arr.size();i++){
//         for(int j=i;j<arr.size();j++){
//             if(arr[i]>arr[j]){
//                 count++;
//             }
//         }
//     }
//     return count;
// }
int main(){
    vector<int> arr={2,4,1,3,5};
    cout<<inversionCount(arr);
}