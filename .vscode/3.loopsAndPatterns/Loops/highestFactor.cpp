// #include<iostream>
// using namespace std;

// int main(){
//     int n, f=1;
//     cout<<"Enter number: ";
//     cin>>n;

//     for(int i=1; i<n; i++){
//         if(n%i == 0){
//             cout<<i<<" ";
//             f=i;
//         }      
//     }
//     cout<<"\nThe greatest factor is: "<<f;
// }


//USING break
#include<iostream>
using namespace std;

int main(){
    int n, f=1;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=n-1; i>=1; i--){
        if(n%i == 0){
            f=i;//stores 15 in f
            break;//exits if loop
        }      
    }
    cout<<"\nThe greatest factor is: "<<f;
}