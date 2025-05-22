class Solution {
public:
  int power(int mid, int n, int m){
    long long ans=1;
    for(int i=0;i<n;i++){
        ans*=mid;
        if(ans>mid) return 2
    }
    if(ans==m) return 1;
    return 0;
  }
  int NthRoot(int N, int M) {
       long long start=0;
       long long end=M;
       long long ans=-1;
       while(start<=end){
        long long mid=start+(end-start)/2;
        long long i=power(mid,N);
        if(i==1){
          return mid;
        }
        else if(i==0){
          start=mid+1;
        }
        else{
          end=mid-1;
        }
       }
       return ans;
    }
};

