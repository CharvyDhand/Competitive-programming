#include<iostream>
using namespace std;
int func(int a,int b){
    int temp=b;
    int count=0;
    while(temp>=b){
        temp=temp-a;
        count++;
    }
    return count;
}
int main(){
    int a,b;
    cin>>a>>b;
    int result=func(a,b);
    cout<<result;

}