/* this program is to classify the grade of student
 grade A if marks >= 90
 grade B if marks >= 70
 grade C if marks >= 50 
 grade D if marks >= 35
 other wise fail  */

#include<iostream>
using namespace std;
int main(){
    int marks;
    cout <<"enter your marks"<<endl;
    cin>>marks;
    if(marks >= 90){
        cout<<"grade a ";
    }
    else if(marks >= 70){
        cout<<"grade B"<<endl;
    }
    else if(marks >= 50){
        cout<<"grade C"<<endl;
    }
    else if(marks >= 35){
        cout<<"grade D"<<endl;
    }
    else{
        cout<<"you fail"<<endl;
    }


}