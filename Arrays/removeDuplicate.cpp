#include<iostream>
#include<set>
using namespace std;
//OPTIMAL
//TIME=O(N)
//SPACE =O(1)
int main(){
    int a[6];
    int n;
    cout<<"Enter array size:";
    cin>>n;
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    for(int j=1;j<n;j++){
        if(a[j]!=a[i]){
            a[i+1]=a[j];
            i++;
        }
    }
    for(int j=0;j<i+1;j++){
        cout<<a[j]<<" ";
    }
}



//BRUTE SOLUTION
// TIME COM= 0(NLOGN+N)
//SPACE = O(N)
// int main(){
//     int a[6];
//     int n;
//     cout<<"Enter array size:";
//     cin>>n;
//     cout<<"Enter array elements:";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     set<int> st;
//     for(int i=0;i<n;i++){
//       st.insert(a[i]);  
//     }
//     int index=0;
//     for(auto& i : st){
//         a[index]=i;
//         index++;
//     }
//     cout << "Array after removing duplicates: ";
//     for (int i = 0; i < index; i++) {
//         cout << a[i] << " ";
//     }
// }