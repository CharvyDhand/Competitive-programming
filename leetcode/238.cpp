class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
      int n=a.size();
      vector<int> result(n);
      int i=0;
      while(i<n){
        long long mul=1;
        for(int j=0;j<n;j++){
            if(j==i){
                continue;
            }
            else{
                 mul=mul*a[j];

            }
        }
        result[i]=mul;
        i++;
      }
    return result;
    }
};
 class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
      int n=a.size();
      vector<int> result(n,1);
      long long prefix=1;
      for(int i=0;i<n;i++){
        result[i]=prefix;
        prefix*=a[i];
      }
      long long suffix=1;
      for(int i=n-1;i>=0;i--){
        result[i]*=suffix;
        suffix*=a[i];
      }
    return result;
    }
};