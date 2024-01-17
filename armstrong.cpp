#include<iostream>
#include<cmath>
using namespace std;

int main(){
   int n;
   cout<<"enter=";
   cin>>n;
   int sum=0;
   int a=n;
   while(n>0){
       int last=n%10;
       sum+=pow(last,3);
       n=n/10;
   }
    
    if(sum==a){
        cout<<sum<<endl;
    }
    else{
        cout<<"not"<<endl;
    }
    return 0;
}
