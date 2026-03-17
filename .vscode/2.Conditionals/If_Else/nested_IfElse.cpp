#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter interger 1: ";
    cin>>a;
    cout<<"Enter interger 2: ";
    cin>>b;
    cout<<"Enter interger 3: ";
    cin>>c;

    if(a>b)
        if(a>c)
            cout<<a<<" is greatest integer.";
        else
            cout<<c<<" is greatest integer.";
    else
        cout<<b<<" is greatest integer.";
}