// #include<iostream>
// using namespace std;

// int main(){
//     int n, count = 0;
//     cout<<"Enter number: ";
//     cin>>n;

//     for(int i =1; i<=n;i++){
//         if(n%i==0 && n!=1 && n!=0){
//             count++;
//         }
//     }

//     if(n==1)
//         cout<<"Neither prime nor composite.";
//     else if(count>2)
//         cout<<n<<" is a Composite number.";
//     else
//         cout<<"Is not a composite number.";   
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n, count = 0;
//     cout<<"Enter number: ";
//     cin>>n;

//     for(int i =1; i<=n;i++){
//         if(n%i==0 && n!=1 && n!=0){
//             count++;
//         }
//     }

//     if(n==1)
//         cout<<"Neither prime nor composite.";
//     else if(count==2)
//         cout<<n<<" is a prime number.";
//     else
//         cout<<"Is not a prime number.";   
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    bool flag = true;

    for(int i =2; i<n;i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }

    if(n==1)
        cout<<"Neither prime nor composite.";
    else if(flag == true)
        cout<<n<<" is a PRIME number.";
    else
        cout<<"Is a COMPOSITE number.";   
}