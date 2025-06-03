class Solution {
public:
    bool possible(vector<int>& a,int m, int k,int day){
        int n=a.size();
        int count=0;
        int bloom=0;
        for(int i=0;i<n;i++){
            if(a[i]<=day){
                count++;
            }
            else{
                bloom+=count/k;
                count=0;
            }
        }
        bloom+=count/k;
        if(bloom>=m){
            return 1;
        }
        return 0;
    }
    int minDays(vector<int>& a, int m, int k) {
        int n= a.size();
        if ((long long)m * k > n) return -1;
        int start = *min_element(a.begin(), a.end());
        int end = *max_element(a.begin(), a.end());
        int ans=-1;
        while (start<=end){
         int mid= start+ (end-start)/2;
         int r=possible(a,m,k,mid);
         if(r==1){
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