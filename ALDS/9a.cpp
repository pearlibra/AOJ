#include <iostream>
using namespace std;

int main() {
    int H, i;
    cin >> H;
    int a[H+1];

    for (i = 1; i < H+1; i++) {
        cin >> a[i];
    }

    for (i = 1; i < H+1; i++) {
        printf("node %d: key = %d, ", i, a[i]);
        if (i != 1) {
            printf("parent key = %d, ", a[i / 2]);
        }
        if (2*i < H+1) {
            printf("left key = %d, ", a[2*i]);
            if (2*i + 1 < H+1) {
                printf("right key = %d, ", a[2*i + 1]);
            }
        }
        cout << endl;
    }
    return 0;
}