// *
// * *
// * * *
// * * * *

// #include<iostream>
// using namespace std;

// int main(){
//     int n,m;
//     cout<<"Enter no.of rows: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }
// --------------------------------------------------------------------
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// #include<iostream>
// using namespace std;

// int main(){
//     int n,m;
//     cout<<"Enter no.of rows: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
// -------------------------------------------------------------------
// A
// B B
// C C C 
// D D D D

// #include<iostream>
// using namespace std;

// int main(){
//     int n, a=1;
//     cout<<"Enter no.of rows: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<(char)(a+64)<<" ";
//         }
//         a++;
//         cout<<endl;
//     }
// }
// ------------------------------------------------------------------
// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5

// #include<iostream>
// using namespace std;

// int main(){
//     int n,m;
//     cout<<"Enter no.of rows: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             if(i%2==0){
//                 cout<<(char)(j+64)<<" ";
//             }
//             else{
//                 cout<<j<<" ";
//             }
//         }
          
//         cout<<endl;
//     }
// }
// ------------------------------------------------------------------
// * * * *
// * * *
// * *
// *
// #include<iostream>
// using namespace std;

// int main(){
//     int n,m;
//     cout<<"Enter no.of rows: ";
//     cin>>n;

//     for(int i=n; i>0; i--){
//         for(int j=i; j>0; j--){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }
//-----------------------------------------------------------------
// 1
// 1 3 5
// 1 3 5 7
// 1 3 5 7 9
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no.of rows: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<(2*j)-1<<" ";
//         }
//         cout<<endl;
//     }
// }
//----------------------------------------------------------------
// 1
// 2 3
// 4 5 6
// 7 8 9 10

// #include<iostream>
// using namespace std;

// int main(){
//     int n,j, a=1;
//     cout<<"Enter no.of rows: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<a<<" ";
//             a++;
//         }
        
//         cout<<endl;
//     }
// }
// ---------------------------------------------------------------
// 1
// 0 1
// 1 0 1
// 0 1 0 1

#include<iostream>
using namespace std;

int main(){
    int n,j, a=1;
    cout<<"Enter no.of rows: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0){
                cout<<a<<" ";
            }
            else{
                cout<<a-1<<" ";
            }
        }
        
        cout<<endl;
    }
}
