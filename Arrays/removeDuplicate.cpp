#include<iostream>
#include<set>
using namespace std;

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