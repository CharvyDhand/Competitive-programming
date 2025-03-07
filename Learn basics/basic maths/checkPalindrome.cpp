#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) {
    long int v=x;
    long int rev=0;
    while(x>0){
     rev=(rev*10)+ (x%10);
     x=x/10;
    } 
    if(rev==v){
     return true;
    }
    else{
     return false;
 }
 }
 int main(){
    cout<<isPalindrome(121);
 }