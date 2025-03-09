#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<algorithm>
//Brute solution:generate all the permutations using recursion function 
//better  //stl:inbuilt function 
// vector<int> nextGreaterPermutation(vector<int> &A) {
//     next_permutation(A.begin(),A.end());
//     return A;
// }
//implementing STL as optimal solution
vector<int> nextGreaterPermutation(vector<int> &a){
    int n=a.size();
    int index=-1;
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            index=i;
            break;
        }
    }
    if(index==-1){
        reverse(a.begin(),a.end());  
        return a;
    }
    for(int i=n-1;i>index;i--){
        if(a[i]>a[index]){
            swap(a[i],a[index]);
            break;
        }
    }
    reverse(a.begin()+index+1,a.end());
    return a;
} 

int main(){
    vector<int> arr={1,3,2};
    nextGreaterPermutation(arr);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" ";
    return 0;
}