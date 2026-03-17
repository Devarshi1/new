// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter Integer: ";
//     cin>>n;
//     if (n>99 && n<1000)
//         cout<<"Number IS a 3-DIGIT number."<<endl;
//     else
//         cout<<"Number IS NOT a 3-DIGIT number."<<endl;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a;
//     cout<<"Enter Integer: ";
//     cin>>a;
//     if (a%5==0 && a%3==0)
//         cout<<"Number is divisible by 5 & 3."<<endl;
//     else
//         cout<<"Number is not divisible by 5 & 3."<<endl;
// }

#include<iostream>
using namespace std;

int main(){
    int s1, s2, s3;
    cout<<"Enter Side 1: ";
    cin>>s1;
    cout<<"Enter Side 2: ";
    cin>>s2;
    cout<<"Enter Side 3: ";
    cin>>s3;

    if((s1+s2)>s3 && (s2+s3)>s1 && (s1+s3)>s2)
        cout<<"Sides "<<s1<<", "<<s2<<" & "<<s3<<" can form a triangle.";
    else
        cout<<"Sides "<<s1<<", "<<s2<<" & "<<s3<<" cannot form a triangle.";
}