int findFloor(vector<int>& a, int target) {
    // Your code here
    int n=a.size();
    if(n==0) return -1;
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
       if(a[mid]<=target){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}