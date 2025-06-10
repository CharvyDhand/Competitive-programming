class Solution {
  public:
    bool makepair(vector<int> &a, int k, int j){
        int n=a.size();
        long long sum=0;
        int counter=1;
        for(int i=0;i<n;i++){
            if(sum+a[i]>j){
                counter ++;
                sum=a[i];
            }
            else{
                sum+=a[i];
            }
        }
        if(counter<=k){
            return true;
        }
        return false;
    }
    int findPages(vector<int> &a, int k) {
        int n=a.size();
        if(n<k || n==0 || k==0)  return -1;
        if (k == 1) return accumulate(a.begin(), a.end(), 0);
        if(k==n) return *max_element(a.begin(),a.end()); 
        long long start=*max_element(a.begin(),a.end());
        long long end=accumulate(a.begin(),a.end(),0);
        int ans=-1;
        while(start<=end){
            long long mid=start+(end-start)/2;
            if(makepair(a,k,mid)==true){
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