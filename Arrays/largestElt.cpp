#include<iostream>
using namespace std;
/*OPTIMAL SOLUTION
timecomplexity=O(N)
*/
int main(){
    int a[6];
    int n;
    cout<<"Enter array size:";
    cin>>n;
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int largest=a[0];
    for(int i=1;i<n;i++){
        if(largest<a[i]){
            largest=a[i];
        }
    }
    cout<<"largest element is "<<largest;
}


/*BRUTE SOLUTION 
IF WE APPLY QUICK SORT 
TIMECOMPLEXITY=O(NLOGN)
AND SPACE COMPLEXITY=O(1)*/
/*int main(){
    int a[6];
    int n;
    cout<<"Enter array size:";
    cin>>n;
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"Largest element is "<<a[n-1];
}  */