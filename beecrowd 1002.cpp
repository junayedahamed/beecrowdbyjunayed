#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    double x, pi = 3.14159;

    double area = 0;
    cin >> x;
    area = pi * x * x;
    cout<<fixed<<setprecision(4);

    cout << area << endl;

    return 0;
}