#include<bits/stdc++.h>
using namespace std;

int main()
{
       int a=1,b=1,c=0,n;
       cin>>n;
        if(n==1||n==2){
                cout<<a;
               return 0;
       }
       for(int i=2;i<n;i++){
             c=a+b;
             a=b;
             b=c;    
       }
     cout<<c;
     return 0;
}