#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
    double r;
    double pi;
    
    cin >> r;

    pi = M_PI;

    cout << fixed << setprecision(6) << pi*r*r << " " << 2*pi*r << endl;

    return 0;
}