// this program is to swap two given numbers using temp variable
#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"enter two numbers you want to swap"<<endl;
    cin>>a;
    cin>>b;
    cout<<"you entered "<<a<<b<<endl;
    temp =a;
    a=b;
    b=temp;
    cout<<"after swapping"<<a<<b<<endl;
    return 0;
}