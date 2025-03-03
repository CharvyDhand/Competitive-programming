#include<iostream>
#include<vector>
using namespace std;

void sortArray(vector<int>& a, int n){
    int low=0,mid=0;
    int high=n-1;
    while(mid<=high){
        if(a[mid]==0 && mid!=low){
            swap(a[mid],a[low]);
            mid++;
            low++;
        }
        else if(a[mid]==2){
            swap(a[mid],a[high]);
            high--;
        }
        else
        mid++;
    }
}
// void sortArray(vector<int>& a, int n){
//     int one=0,zero=0,two=0;
//     for(int i=0;i<n;i++){
//         if(a[i]==0){
//             zero++;
//         }
//         else if(a[i]==1){
//             one++;
//         }else two++;
//     }
//     for(int i=0;i<zero;i++){
//         a[i]=0;
//     }
//     one=one+zero;
//     for(int i=zero;i<one;i++){
//         a[i]=1;
//     }
//     two=one+two;
//     for(int i=one;i<two;i++){
//         a[i]=2;
//     }
// }
int main(){
    int n;
    cout<<"Enter array size:";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"after sorting:";
    sortArray(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
