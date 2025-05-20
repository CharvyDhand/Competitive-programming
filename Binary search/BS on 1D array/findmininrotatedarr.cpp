class Solution {
public:
    int findMin(vector<int>& a) {
        int n=a.size();
        if(n==0) return -1;
        int start=0;
        int end=n-1;
        int ans=INT_MAX;
        while(start<end){
            int mid=start+(end-start)/2;
            if(a[end]>a[mid]){
                      end=mid;  
                }
            else if(a[mid] > a[end]) {
                 start=mid+1;
                }
                else{
                    end--;
                }
        }
        return a[start];
    }
};