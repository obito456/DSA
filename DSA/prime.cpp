#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"enter=";
    cin>>n;
    bool flag=false;                // Corrected initialization  0
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"not prime"<<endl;
            flag=true;               // Corrected assignment   1
            break;
        }
    }    
    if(!flag){                     //   1
        cout<<"prime"<<endl;
    }
    return 0;
}
