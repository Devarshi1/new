//Method 1:

// #include<iostream>
// using namespace std;

// int main(){
//     int x = 2;
//     int y = 5;
//     cout<<x<<" "<<y<<endl;
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
//     cout<<x<<" "<<y<<endl;
// }

//Method 2 : 

#include<iostream>
using namespace std;

int main(){
    int x = 2;
    int y = 5;
    cout<<x<<" "<<y<<endl;
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<x<<" "<<y<<endl;
}