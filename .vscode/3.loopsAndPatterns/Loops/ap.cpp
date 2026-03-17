// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter Number of terms you want: ";
//     cin>>n;
//     //1 3 5 7 9 
//     for(int i = 1; i<=(2*n)-1; i+=2)  {
//         //for iteration we use formula an= a+(n-1)d -> (2*n)-1
//         cout<<i<<" ";
//     }
    
// }

//METHOD-1
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter Number of terms you want: ";
//     cin>>n;
//     //4 7 10 13..... 
//     for(int i = 4; i<=(3*n)+1; i+=3)  {
//         //for iteration we use formula an= a+(n-1)d -> (3*n)+1
//         cout<<i<<" ";
//     }
    
// }

// METHOD-2
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number of terms you want: ";
    cin>>n;
    //4 7 10 13..... 
    int a =4;
    for(int i = 1; i<=n; i++)  {
        cout<<a<<" ";
        a+=3;
    }
    
}