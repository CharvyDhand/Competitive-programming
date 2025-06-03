class Solution {
public:
    long long function(vector<int>& a, int k){
        int n=a.size();
        long long count=0;
        for(int i=0;i<n;i++){
            count+=(a[i]+k-1)/k;
        }
       return count;
    }
    int smallestDivisor(vector<int>& a, int threshold) {
        int n=a.size();
        int start=1;
        int end=*max_element(a.begin(),a.end());
        int ans=-1;
        while(start<=end){
            int mid=start +(end-start)/2;
            long long result=function(a,mid);
            if(result<=threshold){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};