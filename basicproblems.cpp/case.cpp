// this programme is used to find char given by user as lower case or upper case
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the char: ";
    cin>>ch;
    if(ch >= 'a' && ch <= 'b'){
        cout<<"lowecase";
    }
    else{
        cout<<"uppercase";
    }
    return 0;
}