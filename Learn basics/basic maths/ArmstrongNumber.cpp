#include<bits/stdc++.h>
using namespace std;
bool checkArmstrong(int n){
	int x=0;
	int temp=n;
	while(temp!=0){
		x++;
		temp=temp/10;
	}
	temp=n;
	int v=0,result=0;
    while(temp!=0){
		v=temp%10;
		result=pow(v,x)+result;
		temp=temp/10;
	}
	if(result==n){
		return true;
	}else
	return false;
}
int main(){
    int x=1;
    cout<<checkArmstrong(x);
    cout<<true;
}