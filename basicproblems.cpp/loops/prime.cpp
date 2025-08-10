// this program is to check whether the given number is prime or not
#include<iostream>
using namespace std;
int main(){
    int n;
    bool flag = true;
    cout<<"enter the number : "<<endl;
    cin>>n;
    for(int i=2;i<= n-1;i++){
        if (n % i == 0){
            flag == false;
        }
    }

    if(flag == true){
        cout<<"prime number"<<endl;

    }
    else{
        cout<<"not a prime number"<<endl;
    }
    return 0;
}