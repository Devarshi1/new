//Square root using include<cmath> || in C it's include<math.h>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a;
    cout<<"Input Number : ";
    cin >> a;
    double sqrt_a = sqrt(a);
    cout<<"Square root of "<<a<< " is :"<< sqrt_a<< endl;
}