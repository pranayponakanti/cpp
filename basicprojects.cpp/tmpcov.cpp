// this program is to convert the given units of temp into other units of celcius or farenheit
#include <iostream>
using namespace std;
int main(){
    char unit;
    double temp;
    cout<<"f = fahrenneit\n";
    cout<<"c = celcius\n";
    cout<<"enter the unit you want to convert to : ";
    cin>>unit;

    if(unit == 'f' || unit == 'F'){
        cout<<"enter the temp in celcius: ";
        cin>>temp;
        temp = (1.8 * temp) + 32.0;
        cout<<"the temperature in fahrenneit :"<<temp<<endl;
    }else{
        cout<<"enter the temp in farheinneit"<<endl;
        cin>>temp;
        temp = (temp - 32)/1.8;
        cout<<"the temperature in celcius is :"<<temp<<endl;
    }
    return 0;

}