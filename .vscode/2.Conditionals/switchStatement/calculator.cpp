#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter Number1: ";
    cin>>a;
    cout<<"Enter Number1: ";
    cin>>b;

    char ch;
    cout<<"(1) For Addition: '+'\n(2) Subtraction: '-'\n(3) Multiplication: '*'\n(4) Division: '/'\nEnter choice: ";
    cin>>ch;

    switch(ch){
        case '+':
            cout<<"Sum = "<<a+b<<endl;
            break;
        case '-':
            cout<<"Difference = "<<a-b<<endl;
            break;
        case '*':
            cout<<"Product = "<<a*b<<endl;
            break;
        case '/':
            cout<<"Quotient = "<<a/b<<endl;
            break;
        default: 
            cout<<"Invalid choice.";
    }
}