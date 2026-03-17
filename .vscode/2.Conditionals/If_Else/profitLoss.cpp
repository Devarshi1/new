#include<iostream>
using namespace std;

int main(){
    int cp , sp;
    cout<<"Enter cost price: ";
    cin>>cp;
    cout<<"Enter selling price: ";
    cin>>sp;

    if(cp==sp)
        cout<<"No profit and no loss."<<endl;
    else if(cp < sp)
        cout<<"You have made a profit of Rs."<<sp-cp<<endl;
    else
        cout<<"You are in a loss of Rs."<<cp-sp<<endl;
}