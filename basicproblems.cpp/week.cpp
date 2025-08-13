// Given the integer day denoting the day number, print on the screen which day of the week it is. Week starts from Monday and for values greater than 7 or less than 1, print Inval
#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"enter the day :"<<endl;
    cin>>day;
    switch (day){
        case 1:
        cout<<"monday"<<endl; 
        break;
        case 2:
        cout<<"tuesday"<<endl;
        break;
        case 3:
        cout<<"wednesday"<<endl;
        break;
        case 4:
        cout<<"thursday"<<endl;
        break;
        case 5:
        cout<<"friday"<<endl;
        break;
        case 6:
        cout<<"saturday"<<endl;
        break;
        case 7:
        cout<<"sunday"<<endl;
        break;
        default:
        cout<<"invalid input"<<endl;
        break;
    
}
return 0;
}