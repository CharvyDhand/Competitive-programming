#include<iostream>
#include<vector>
using namespace std;
//optimal solution
//time complexity=o(n)
//no extra space
int main(){
    int n;
    cout<<"Enter array size:";
    cin>>n;
    cout<<"enter array element:";
    vector<int> a(n);
    for(int i=0;i<n;i++){
         cin>>a[i];
    }
    int j=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1){return a;}
    for(int i=j+1;i<n;i++){
        if(a[i]!=0){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
//brute solution 
//timecomplexity= 0(n+x+n-x)
//space complexity=0(n)
// int main(){
//     int n;
//     cout<<"Enter array size:";
//     cin>>n;
//     vector<int> a(n);
//     vector<int> temp(n);
//     cout<<"enter array element:";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(a[i]!=0){
//             temp[j]=a[i];
//             j++;
//         }
//     }
//     for(int i=0;i<j;i++){
//         a[i]=temp[i];
//     }
//     for(int i=n-j;i<n;i++){
//         a[i]=0;
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }