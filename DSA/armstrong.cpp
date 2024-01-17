#include<iostream>
#include<cmath>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main(){
   int n;
   cout<<"enter=";
   cin>>n;
   int sum=0;
   int a=n;
   int num = countDigits(n);
   while(n>0){
       int last=n%10;
       sum+=pow(last,num);
       n=n/10;
   }
    
    if(sum==a){
        cout<<"yes "<<sum<<endl;
    }
    else{
        cout<<"not"<<endl;
    }
    return 0;
}
