#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int R[n];

    for (int i=0; i<n; i++) {
        cin >> R[i];
    }

    int maxv = -1000000000, minv = R[0];
    
    for (int i=1; i<n; i++) {
        maxv = max(maxv, R[i]-minv);
        minv = min(minv, R[i]);
    }

    cout << maxv << endl;
    return 0;
}