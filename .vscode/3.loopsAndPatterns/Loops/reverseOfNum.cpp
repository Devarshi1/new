#include<iostream>
using namespace std;

int main(){
    int n, x, new_n =0 ;
    cout<<"Enter number: ";
    cin>>n;

    while(n!=0){
        x=n%10;
        new_n *= 10;
        new_n += x;
        n=n/10;
    }
    cout<<"New Number: "<<new_n;
}