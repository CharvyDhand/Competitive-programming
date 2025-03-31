int maxPartitions(string &s) {
    // code here
    int n=s.size();
    int counter=n-1;
    unordered_map<char,int> temp;
    for(int i=0;i<n;i++){
      temp[s[i]]=i;
    }
    int partition=0;
    int end=0;
    int start=0;
    for(int i=0;i<n;i++){
        end=max(end,temp[s[i]]);
        if(i==end){
            partition++;
            start=i+1;
        }
    }
    return partition;
}