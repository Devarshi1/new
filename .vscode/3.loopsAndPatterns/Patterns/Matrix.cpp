//  1 2 3 4
//  1 2 3 4
//  1 2 3 4

// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"Enter number of rows: ";
//     cin>>n;
//     cout<<"Enter number of columns: ";
//     cin>>m;
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=m; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl; 
//     }
// }


//  * * * *
//  * * * *
//  * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"Enter number of rows: ";
//     cin>>n;
//     cout<<"Enter number of columns: ";
//     cin>>m;
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=m; j++){
//             cout<<"*";
//         }
//         cout<<endl; 
//     }
// }


//  1 1 1 1 
//  2 2 2 2
//  3 3 3 3

// #include<iostream>
// using namespace std;
// int main(){
//     int n,m,a=1;
//     cout<<"Enter number of rows: ";
//     cin>>n;
//     cout<<"Enter number of columns: ";
//     cin>>m;
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=m; j++){
//             cout<<a<<" ";
//         }
//         a++;
//         cout<<endl; 
//     }
// }


//  A B C D
//  A B C D
//  A B C D
// #include<iostream>
// using namespace std;

// int main(){
//     int i,j,n,m;
//     cout<<"Enter number of rows: ";
//     cin>>n;
//     cout<<"Enter number of columns: ";
//     cin>>m;

//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             cout<<(char)(j+65)<<" ";
//         }
//         cout<<endl;
//     }
// }

// A A A A
// B B B B
// C C C C
// D D D D

#include<iostream>
using namespace std;

int main(){
    int n,m, a=1;
    cout<<"Enter number of rows: ";
    cin>>n;
    cout<<"Enter number of columns: ";
    cin>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<(char)(a+64)<<" ";//for lower case use (a+96)
        }
        a++;
        cout<<endl;
    }
}