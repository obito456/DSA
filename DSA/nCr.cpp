#include<iostream>
#include<cmath>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}

int main(){
    int n;
    cout<<"enter n=";
    cin>>n;
    int r;
    cout<<"enter r=";
    cin>>r;
    int x=fact(n)/(fact(r)*fact(n-r));
    cout<<x<<endl;
    
    return 0;
}