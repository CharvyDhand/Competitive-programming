#include<bits/stdc++.h>
using namespace std;
#include<vector>
//better = nlogn
int longestConsecutive(vector<int>& a) {
    if (a.empty()) return 0;
    sort(a.begin(), a.end());
    long long count = 1;
    long long n = a.size();
    long long maxi = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            if (a[i] == a[i - 1] + 1) {
                count++;
            } else {
                maxi = max(maxi, count);
                count = 1;
            }
        }
    }
    maxi = max(maxi, count);
    return maxi;
}
int main(){
    vector<int> a={2,1,4,5,6,3,80,7,8,7};
    cout<<longestConsecutive(a);
}