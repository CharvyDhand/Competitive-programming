class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
    if (a.empty()) return k;
       int n=a.size();
       int start=0;
       int end=n-1;
       while(start<=end){
        int mid=start+(end-start)/2;
        int missing=a[mid]-(mid+1);
        if(missing<k){
           start=mid+1;
        }
        else{
            end=mid-1;
        }
       }
       return end+1+k;
    }
};