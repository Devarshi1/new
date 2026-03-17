#include<iostream>
using namespace std;

int fact(int x){
    int fact = 1;

    for(int i = 1; i<=x; i++){
        fact = fact*i;
    }
    return fact;
}

int main(){
    int n,r;
    cout<<"Enter Number(n): ";
    cin>>n;
    cout<<"Enter Number(r): ";
    cin>>r;
    int a = fact(n);
    int b = fact(r);
    int c = fact(n-r);
    cout<<"Combination is: "<<a/(b*c);
    return 0;
}  