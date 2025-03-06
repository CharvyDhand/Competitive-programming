#include<bits/stdc++.h>
using namespace std;
int reverse(int x) {
    long v=0;
    int k=0;
    while(x!=0){
        k=x%10;
        v=k+(v*10);
        x=x/10;
        if(v>INT_MAX || v<INT_MIN){
            return 0;
        }
    }
    
    return v;
}
int main(){
    long x;
    cout<<"enter number:";
    cin>>x;
    cout<<reverse(x);
}