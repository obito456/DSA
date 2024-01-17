#include<iostream>
#include<cmath>
using namespace std;

void fib(int n){
    int n1=0;
    int n2=1; 
    int n3;
    for(int i=0;i<=n;i++){
        cout<<n1<<endl;
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    return;
    
}

int main(){
    int n;
    cout<<"enter=";
    cin>>n;
    fib(n);
  
    return 0;
}
