class Solution {
public:
    long long function(int h,int mid,vector<int>& piles){
        int n=piles.size();
        long long a=0;
        for(int i=0;i<n;i++){
             a+=(piles[i]+mid-1)/mid;            
        }
        return a;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long start=1;
        long long end = *max_element(piles.begin(), piles.end());
        long long ans=end;
        while(start<=end){
            long long mid=start+(end-start)/2;
            long long result=function(h,mid,piles);
            if(result<=h){
                ans=mid;
                end=mid-1;
            }
            else {
              start=mid+1;
            }
        }
        return ans;
    }
};