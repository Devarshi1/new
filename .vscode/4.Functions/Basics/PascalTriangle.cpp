#include<iostream>
using namespace std;

int fact(int x){
    int fact = 1;

    for(int i = 1; i<=x; i++){
        fact = fact*i;
    }
    return fact;
}
int ncr(int n, int r){
    int a = fact(n);
    int b = fact(r);
    int c = fact(n-r);
    return a/(b*c);
}

int main(){
    int n;
    cout<<"Enter no.of rows: ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int k=0; k<n-i; k++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}
