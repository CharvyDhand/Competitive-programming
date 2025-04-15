class Solution {
    public:
        int lower(vector<int>& a,int target){
            int n=a.size();
            int result=-1;
            int end=n-1;
            int start=0;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(a[mid]==target){
                   result=mid;
                   end=mid-1;
                }
                else if(a[mid]>target){
                   end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            return result;
        }
            int upper(vector<int>& a,int target){
            int n=a.size();
            int result=-1;
            int end=n-1;
            int start=0;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(a[mid]==target){
                   result=mid;
                   start=mid+1;
                }
                else if(a[mid]>target){
                   end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            return result;
        }
        vector<int> searchRange(vector<int>& a, int target) {
            int left=lower(a,target);
            int right=upper(a,target);
            return {right-left};
        }
    };