class Solution {
public:
    long long cal(vector<int>& a, int k, long long j){
        int n=a.size();
        int counter=1;
        long long sum=0;
        long long maxi=0;
        for(int i=0;i<n;i++){
            if(sum+a[i]>j){
                counter++;
                sum=a[i];
            }
            else{
                sum+=a[i];
            }
            maxi=max(sum,maxi);
        }
        if(counter<=k){
            return maxi; 
        }
        return 0;
    }
    long long splitArray(vector<int>& a, int k) {
        int n=a.size();
        if(n<k || k==0 || n==0) return -1;
        if(n==k) return  *max_element(a.begin(),a.end()); 
        if(k==1) return accumulate(a.begin(),a.end(),0LL);
        long long start=*max_element(a.begin(),a.end());
        long long end=accumulate(a.begin(),a.end(),0LL);
        long long ans=end;
        while(start<=end){
            long long mid=start+(end-start)/2;
            long long result=cal(a,k,mid);
            if(result>0){
                ans=min(ans,result);
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};