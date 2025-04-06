vector<int> searchRange(vector<int>& nums, int target) {
    int n=nums.size();
    vector<int> v(2,-1);
    for(int i=0;i<n;i++){
        if(nums[i]==target){
        v[0]=i;
        break;
        }
    }
    for(int i=n-1;i>-1;i--){
        if(nums[i]==target){
        v[1]=i;
        break;
    }
    }
    return v;
}