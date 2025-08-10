// this program is to build a basic calculator 
#include<iostream>
using namespace std;
int main(){
    int x,y;
    char ch;
    cout<<"enter the number1";
    cin>>x;
    cout<<"enter the number2"<<endl;
    cin>>y;
    cout<<"enter operator + ,- ,*,/ "<<endl;
    cout<<"enter the operator";
    cin>>ch;
    if(ch == '+' ){
        cout<<"sum of two numbers is "<<x+y<<endl;
    }
    else if(ch == '-'){
        cout<<"subtraction of two numbers is "<<x-y<<endl;

    }
    else if(ch == '*'){
        cout<<"multiplication of two numbers is "<<x*y<<endl;
    
    }
    else{
        cout<<"division of two numbers is "<<x/y<<endl;
    }
    return 0;
    

}