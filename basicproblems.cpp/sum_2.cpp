// this programs is to add the sum of numbers upto n using for loop
#include<iostream>
using namespace std;
int main(){
    int n ,sum=0;
    cout<<"enter the number";
    cin>>n;
    for(int i=0;i<=n;i++){
        sum +=i;


    }
    cout<<" the sum of number is "<<sum<<endl;
    return 0;


}