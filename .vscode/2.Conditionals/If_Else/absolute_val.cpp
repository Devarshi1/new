#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter an integer: ";
    cin>>x;
    if (x >= 0)
        cout<<"Absolute value of "<<x<< " is: "<<x<< endl;
    else
        cout<<"Absolute value of "<<x<< " is: "<<-x<< endl;
}