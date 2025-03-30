#include<iostream>
#include<vector>
#include<set>
#include<bits/stdc++.h>
using namespace std;
int startStation(vector<int> &gas, vector<int> &cost) {
    // Your code here
    int n=gas.size();
    int sp=0,totalgas=0,totalcost=0,sub=0;
    for(int i=0;i<n;i++){
        totalgas +=gas[i];
        totalcost+=cost[i];
        sub+=gas[i]-cost[i];
        if(sub<0){
            sp=i+1;
            sub=0;
        }
    }
      return (totalgas >= totalcost) ? sp : -1;
}
int main(){
    
}