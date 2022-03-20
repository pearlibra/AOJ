#include <iostream>
using namespace std;

int main() {
    int i, j, k, count;
    int n, x;

    count = 0;

    cin >> n >> x;
    while (n != 0 || x != 0) {
        for (i=1; i<= n-2; i++) {
            for (j=i+1; j<= n-1; j++) {
                for (k=j+1; k<= n; k++) {
                    if (i + j + k == x) {
                        count++;      
                    }
                }
            }
        }
        cout << count << endl;
        count = 0;
        cin >> n >> x;
    }
    return 0;
}