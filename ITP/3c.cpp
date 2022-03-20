#include<iostream>
using namespace std;

int main() {
    int i, x, y;
    int a[10000][2];
    int b[2];
    i = 0;
    
    do {
        cin >> x >> y;
        a[i][0] = x;
        a[i][1] = y;
        i++;
    } while(x || y);

    i = 0;

    while (a[i][0] || a[i][1]) {
        if (a[i][0] <= a[i][1]) {
            cout << a[i][0] << " " << a[i][1] << endl;
            i++;
        }
        else {
            cout << a[i][1] << " " << a[i][0] << endl;
            i++;
        }
    }
    return 0;
}
