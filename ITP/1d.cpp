#include<iostream>
using namespace std;

int main() {
    int input_s;
    int h, m, s;
    cin >> input_s;
    h = input_s / 3600;
    m = (input_s - 3600*h) / 60;
    s  = input_s - 3600*h - 60*m;
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}