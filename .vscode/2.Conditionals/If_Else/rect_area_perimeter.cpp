#include<iostream>
using namespace std;

int main(){
    int l,b,a,p;
    cout<<"Enter length of rectangle: ";
    cin>>l;
    cout<<"Enter breadth of rectangle: ";
    cin>>b;
    a = l*b;
    p = 2*l*b;
    cout<<"Area of rectangle is: "<<a<<endl;
    cout<<"Perimeter of rectangle is: "<<p<<endl;
    if(a>p)
        cout<<"Area is greater than perimeter.";
    else
        cout<<"Perimeter is greater than area.";
}