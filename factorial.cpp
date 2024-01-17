#include<iostream>
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
    cout<<"enter=";
    cin>>n;
    int a=fact(n);
    cout<<a<<endl;
  
    return 0;
}