#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int x, y, z, a, b, c;
    cin>>x>>y>>z>>a>>b>>c;
    int count=0;
       while(c>0 && z>0){
            c--;
            z--;
            count++;
    }
    while(b>0 && (y>0||z>0)){
         if(y>0){
            b--;
            y--;
            count++;
        }
        else if(z>0){
            b--;
            z--;
            count++;
        }
    }
    while(a>0 &&(x>0 ||y>0 ||z>0)){
        if(x>0){
            a--;
            x--;
            count++;
        }
        else if(y>0){
            a--;
            y--;
            count++;
        }
        else if(z>0){
            a--;
            z--;
            count++;
        }
    }
    cout<<count<<endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}