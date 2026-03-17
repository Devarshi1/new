#include<iostream>
using namespace std;

void summ(int n, int sum){
    if(n<0){
        cout<<sum;
        return;
    }
    summ(n-1, sum+n);
}
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    summ(n,0);
}