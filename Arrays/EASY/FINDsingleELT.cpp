#include<iostream>
#include<vector>
using namespace std;
//optimal
int getSingleElement(vector<int> &a){
    if (a.empty()) return -1;
  int xor1=0;
  for(int num:a){
      xor1^=num;
  }
  return xor1;
}
//better 2
// int getSingleElement(vector<int> &a){
//     map<int,int> mpp;
//     for(int i=0;i<a.size();i++){
//         mpp[a[i]]++;
//     }
//     for(auto it:mpp){
//       if(it.second==1){
//           return it.first;
//       }
//     }
//     return -1;
// }
//better 1
// int getSingleElement(vector<int> &a){
//     int maxi=0;
// 	for(int i=0;i<a.size();i++){
//         maxi=max(maxi,a[i]);
//     }
//     vector<int> hash(maxi+1,0);
//     for(int i=0;i<a.size();i++){
//         hash[a[i]]++;
//     }
//     for(int i=0;i<a.size;i++){
//         if(hash[a[i]]==1){
//             return a[i];
//         }
//     }
//     return -1;
// }
//brute
// int getSingleElement(vector<int> &a){
// 	for(int i=0;i<a.size();i++){
// 		int num=a[i];
// 		int counter=0;
// 		for(int j=0;j<a.size();j++){
// 			if(a[j]==num){
// 				counter++;
// 			}
// 		}
// 		if(counter==1){
// 			return num;
// 		}
// 	}	
// 	return 0;
// }
int main(){
    int n;
    cout<<"Enter array size:";
    cin>>n;
    cout<<"enter array element:";
    vector<int> a(n);
    for(int i=0;i<n;i++){
         cin>>a[i];
    }
    int result=getSingleElement(a);
    cout<<result;
}