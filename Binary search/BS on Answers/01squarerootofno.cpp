class Solution {
public:
    long long floorSqrt(long long n)  {
      long long start=0;
      long long end=n;
      long long ans=0;
      while(start<=end){
        long long mid=start + (end-start)/2;
        long long i=mid*mid;
        if(i==n){
            return mid;
        }
        else if(i<n){
            ans=mid;
            start=mid+1;
        }
        else{
           end=mid-1;
        }
      }
     return ans;
    }
};