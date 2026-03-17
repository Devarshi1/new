//       *
//     * * *
//   * * * * *
// * * * * * * *

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no.of rows: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int k=1; k<=n-i; k++){
//             cout<<"  ";
//         }
//         for(int j=1; j<=2*i-1; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

//       *
//     * * *
//   * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1; i<=(n/2)+1; i++){
        for(int k=1; k<=((n/2)+1)-i; k++){
            cout<<"  ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i=(n/2)+2; i<=n; i++){
        for(int k=1; k<=i-((n/2)+1); k++){
            cout<<"  ";
        }
        for(int j=1; j<=2*(n-i)+1; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }  
}