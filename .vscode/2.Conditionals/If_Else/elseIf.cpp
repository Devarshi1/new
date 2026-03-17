// #include<iostream>
// using namespace std;

// int main(){
//     int a, b, c;
//     cout<<"Enter interger 1: ";
//     cin>>a;
//     cout<<"Enter interger 2: ";
//     cin>>b;
//     cout<<"Enter interger 3: ";
//     cin>>c;

//     if(a>b && a>c)
//         cout<<"The greatest number is: "<<a<<endl;
//     else if(b>a && b>c)
//         cout<<"The greatest number is: "<<b<<endl;
//     else
//         cout<<"The greatest number is: "<<c<<endl;
// }

#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter percentage: ";
    cin>>a;
    
    if(a>80 && a<=100)
        cout<<"Very Good.";
    else if(a>60 && a<81)
        cout<<"Good.";
    else if(a>40 && a<61)
        cout<<"Average.";
    else
        cout<<"Fail";
}