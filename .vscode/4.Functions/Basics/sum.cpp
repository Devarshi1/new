#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Enter num1: ";
    cin>>a;
    cout<<"Enter num2: ";
    cin>>b;
    cout<<sum(a,b);
}