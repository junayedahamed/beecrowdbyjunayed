#include<iostream>
#include<math.h>
using namespace std;
float pi = 3.1415;
int main(){
    int radius,  amount = 0,r;
    float v = 0,gas;
    cin >> radius >> gas;
    
    r=pow(radius,3);

    v = (4* pi * r)/3;
    
    
    amount = gas / v;
    cout << amount << endl;
    return 0;
}