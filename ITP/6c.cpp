#include <iostream>
using namespace std;

void output_array_per_space(int a[]);

int main() {
    int b, f, r, v;
    int n, i, j;
    int b1[3][10] = {};
    int b2[3][10] = {};
    int b3[3][10] = {};
    int b4[3][10] = {};
    
    cin >> n;

    for (i=0; i<n; i++) {
        cin >> b >> f >> r >> v;
        if (b == 1) {
            b1[f-1][r-1] += v;
        } else if (b == 2) {
            b2[f-1][r-1] += v;
        } else if (b == 3) {
            b3[f-1][r-1] += v;
        } else {
            b4[f-1][r-1] += v;
        } 
    }

    for (i=0; i<3; i++) {
        for (j=0; j<10; j++) {
            cout << ' ' << b1[i][j];
            if (j == 9) {
                cout << '\n';
                break;
            }
            
        }
    }
    cout << "####################" << endl;

    for (i=0; i<3; i++) {
        for (j=0; j<10; j++) {
            cout << ' ' << b2[i][j];
            if (j == 9) {
                cout << '\n';
                break;
            }
            
        }
    }
    cout << "####################" << endl;

    for (i=0; i<3; i++) {
        for (j=0; j<10; j++) {
            cout << ' ' << b3[i][j];
            if (j == 9) {
                cout << '\n';
                break;
            }
            
        }
    }
    cout << "####################" << endl;

    for (i=0; i<3; i++) {
        for (j=0; j<10; j++) {
            cout << ' ' << b4[i][j];
            if (j == 9) {
                cout << '\n';
                break;
            }
            
        }
    }
    return 0;
}