#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> S, H, C, D;
    int n, i, j, num;
    char x;

    cin >> n;

    for (i=0; i<n; i++) {
        cin >> x >> num;
        if (x == 'S') {
            S.push_back(num);
        } else if (x == 'H') {
            H.push_back(num);
        } else if (x == 'C') {
            C.push_back(num);
        } else {
            D.push_back(num);
        }
    }
    
    for (i=1; i<=13; i++) {
        for (j=0; j<(int)S.size(); j++) {
            if (i == S[j]) break;
            if (j == (int)S.size() - 1) {
                printf("S %d\n", i);
            }
        }   
    }
    for (i=1; i<=13; i++) {
        for (j=0; j<(int)H.size(); j++) {
            if (i == H[j]) break;
            if (j == (int)H.size() - 1) {
                printf("H %d\n", i);
            }
        }   
    }
    for (i=1; i<=13; i++) {
        for (j=0; j<(int)C.size(); j++) {
            if (i == C[j]) break;
            if (j == (int)C.size() - 1) {
                printf("C %d\n", i);
            }
        }   
    }
    for (i=1; i<=13; i++) {
        for (j=0; j<(int)D.size(); j++) {
            if (i == D[j]) break;
            if (j == (int)D.size() - 1) {
                printf("D %d\n", i);
            }
        }   
    }
    return 0;
}
