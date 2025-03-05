#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
#include<vector>
int maximumProfit(vector<int> &prices){
    int mini=prices[0];
        int maxi=0,profit=0;
        for(int i=1;i<prices.size();i++){
           profit=prices[i]-mini;
           maxi=max(profit,maxi);
           mini=min(mini,prices[i]);
        }
        return maxi;
}
int main(){
    vector<int> a={7,1,3,2,6,2,3};
    int result=maximumProfit(a);
    cout<<result;
}