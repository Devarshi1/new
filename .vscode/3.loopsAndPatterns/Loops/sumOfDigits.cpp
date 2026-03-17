#include<iostream>
using namespace std;

int main(){
    int n, x, sum=0;
    cout<<"Enter number: ";
    cin>>n;

    while(n>0){
        x=n%10;
        n=n/10;
        sum= sum+x;
    }
    cout<<"The sum of digits is: "<<sum;
}

// #include<iostream>
// using namespace std;

// int main(){
//     int n, x, product=1;
//     cout<<"Enter number: ";
//     cin>>n;

//     while(n>0){
//         x=n%10;
//         n=n/10;
//         product = product*x;
//     }
//     cout<<"The product of digits is: "<<product;
// }