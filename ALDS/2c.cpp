#include <iostream>
#include <vector>
#include <string>
#include <utility>
using namespace std;

int main() {
    int n, count, i, j, minj;
    cin >> n;
    vector<string> a1;
    string input;
    
    for (i=0; i<n; i++) {
        cin >> input;
        a1.push_back(input);
    }

    vector<string> a2(a1);

    for (i=0; i<n; i++) {
        for(j=n-1;j>i;j--) {
            if(a1[j][1] < a1[j-1][1]) {
                swap(a1[j], a1[j-1]);
            }
        }
    }

    for (i=0; i<n; i++) {
        minj = i;
        for (j=i; j<n; j++) {
            if (a2[j][1] < a2[minj][1]) {
                minj = j;
            }
        }
        swap(a2[i], a2[minj]);
    }

    for (i=0; i<n; i++) {
        if (i == n-1) {
            cout << a1[i] << endl;
        } else {
            cout << a1[i] << ' ';
        }
    }
    cout << "Stable" << endl;

    for (i=0; i<n; i++) {
        if (i == n-1) {
            cout << a2[i] << endl;
        } else {
            cout << a2[i] << ' ';
        }
    }

    for (i=0; i<n; i++) {
        if (a1[i] != a2[i]) {
            cout << "Not stable" << endl;
            break;
        } else if (i==n-1) {
            cout << "Stable" << endl;
        }
    }
    return 0;
}