// #include<iostream>
// using namespace std;

// int main(){
//     for (int i=1; i<=20; i++){
//         if(i==3 || i==8){
//             continue;
//         }
//         else{
//             cout<<i<<" ";
//         }
//     }
// }

#include<iostream>
using namespace std;

int main(){
    for (int i=1; i<=100; i++){
        if(i%2==0){
            continue;
        }
        else{
            cout<<i<<" ";
        }
    }
}