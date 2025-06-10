// User function Template for C++

class Solution {
  public:
    bool placecows(vector<int> &a, int k, int j){
        int n=a.size();
        int count=1;
        int last=a[0];
        for(int i=1;i<n;i++){
            if((a[i]-last)>=j){
                count++;
                last=a[i];
            }
        }
        if(count>=k){
            return true ;
        }
        return false;
    }
    int aggressiveCows(vector<int> &a, int k) {
        int n=a.size();
        sort(a.begin(),a.end());
        if(k > n) return -1;
        if(k == 1) return 0;
        int start=1;
        int end=a[n-1]-a[0];
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            bool result=placecows(a,k,mid);
            if(result==true){
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