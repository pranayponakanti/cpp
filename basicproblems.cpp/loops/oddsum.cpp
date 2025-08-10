// this program is to add sum of odd numbers upto given number n
#include<iostream>
using namespace std;
int main(){
    int n,oddsum=0;
    cout<<"enter the number: ";
    cin>>n;
    for(int i =0;i<=n;i++){
        if(i % 2 != 0){
            cout<<i<<" "<<endl;
            oddsum +=i;

        }
    }
    cout<<oddsum;
return 0;
}