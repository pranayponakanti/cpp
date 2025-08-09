#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a;
    double b;
    double c;
    cout<<"Enter the side A: "<<endl;
    cin>>a;
    cout<<"Enter the side B: "<<endl;
    cin>>b;
    // using the power function from the cmath ..
    a = pow(a,2);
    b = pow(b,2);
    c= sqrt(a+b);
    cout<<"the hypotenuse of the given triangle is :"<<c<<endl;
    return 0;
    

    
}