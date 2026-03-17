//     *     
//     * 
// * * * * *
//     * 
//     * 

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no.of rows: ";
//     cin>>n;
//     int mid =(n/2)+1;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(i== mid || j == mid){
//                 cout<<"*"<<" ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }

// * * * * * * 
// *         * 
// *         * 
// * * * * * * 

// #include<iostream>
// using namespace std;

// int main(){
//     int n,m;
//     cout<<"Enter no.of rows: ";
//     cin>>n;
//     cout<<"Enter no.of columns: ";
//     cin>>m;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=m; j++){
//             if(i==1 || i==n || j==1 || j==m){
//                 cout<<"*"<<" ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }

// *       *
//   *   *
//     *
//   *   *
// *       *

// #include<iostream>
// using namespace std;

// int main(){
//     int n,m;
//     cout<<"Enter no.of rows: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(i==j || i+j==6){
//                 cout<<"*"<<" ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }

// * * * * * 
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

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(i+j<=n+1){
//                 cout<<"*"<<" ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }

//       * * * *
//     * * * *
//   * * * *
// * * * *

// #include<iostream>
// using namespace std;

// int main(){
//     int n,m;
//     cout<<"Enter no.of rows: ";
//     cin>>n;
//     cout<<"Enter no.of columns: ";
//     cin>>m;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=m; j++){
//             if(i+j<=n || i+j>m+1){
//                 cout<<"  ";
//             }
//             else{
//                 cout<<"*"<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

