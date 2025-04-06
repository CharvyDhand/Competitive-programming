vector<int> getFloorAndCeil(int x, vector<int> &a) {
    int n=a.size();
    if(n==0) return {-1,-1};
    int start=0;
    int end=n-1;
    sort(a.begin(),a.end());
    int floor=-1,ceil=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(a[mid]==x){
            return {x,x};
        }
      else if(a[mid]<x){
            floor=a[mid];
            start=mid+1;
        }
        else{
            ceil=a[mid];
            end=mid-1;
        }
    }
    return {floor,ceil};
}