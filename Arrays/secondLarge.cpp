#include<iostream>
using namespace std;
//OPTIMAL APPROACH 

//BETTER SOLUTION 
// O(n+n)
/* int main(){
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
    int second=-1;
    for(int i=0;i<n;i++){
        if(a[i]>second && a[i]<largest){
            second=a[i];
        }
    }
    cout<<second;
} */


//BRUTE APPROACH
//TIME COMPLEXITY=O(NLOGN)
/*
void swap(int a[],int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
int partition(int a[],int s,int e){
    int pivot=a[e];
    int i=s-1;
    for(int j=s;j<e;j++){
        if(a[j]<=pivot){
            i++;
            swap(a,i,j);        }
    }
    swap(a,i+1,e);
    return i+1;
}
void quicksort(int a[],int s,int e){
    if(s<e){
        int pivot=partition(a,s,e);
        quicksort(a,s,pivot-1);
        quicksort(a,pivot+1,e);
    }
}
int main(){
    int a[6];
    int n;
    cout<<"Enter array size:";
    cin>>n;
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    int largest=a[n-1];
    int check=-1;
    for(int i=n-2;i>=0;i--){
        if(a[i]!=largest){
            largest=a[i];
            check=1;
            break;
        }
    }
    if(check==-1){
        cout<<"second largest number not available";
    }
    else{
        cout<<largest;
    }
}
    */