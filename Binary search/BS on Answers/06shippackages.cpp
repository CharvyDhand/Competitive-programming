class Solution {
public:
    int function(vector<int>& a,int days,int k){
        int n=a.size();
        long long sum=0;
        int counter=1;
        for(int i=0;i<n;i++){
           if (a[i] > k) return 0;
           if(sum+a[i]>k){
            counter++;
            sum=a[i];
           } 
           else{
            sum+=a[i];
           }
        }
        if(counter==days){
            return 1;
        }
        else if (counter<days){
            return 2;
        }
        else{
          return 0;
        }
        return 0;
    }
    int shipWithinDays(vector<int>& a, int days) {
        int n=a.size();
        long long start=*max_element(a.begin(),a.end());
        int ans=-1;
        long long end=accumulate(a.begin(),a.end(),0);
        while(start<=end){
            long long mid=start+(end-start)/2;
            bool result=function(a,days,mid);
            if(result==1 || result==2){
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