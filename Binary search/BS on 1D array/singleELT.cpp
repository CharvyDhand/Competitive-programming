class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int n=a.size();
        if(n==0) return -1;
        if(n==1) return a[0];
        if(n>1 && a[0]!=a[1]) return a[0];
        if(n>1 && a[n-1]!=a[n-2]) return a[n-1];
        int start=1;
        int end=n-2;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid > 0 && mid < n - 1 && a[mid]!=a[mid-1] &&  a[mid]!=a[mid+1]){
                return a[mid];
            }
            if((mid%2==1 && a[mid]==a[mid-1]) || (mid%2==0 && a[mid]==a[mid+1])){
                start=mid+1;
            }
            else{
                 end=mid-1;
            }
        }
        return -1;
    }
};