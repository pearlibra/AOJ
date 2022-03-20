#include <iostream>
#include <string>
using namespace std;

int main() {
    string name_t, name_h;
    int n, i, point_t, point_h;

    point_t = 0;
    point_h = 0;

    cin >> n;

    for (i=0; i<n; i++) {
        cin >> name_t;
        cin >> name_h;
        if (name_t > name_h) {
            point_t += 3;
        } else if (name_t < name_h) {
            point_h += 3;
        } else {
            point_t++;
            point_h++;
        }
    }
    printf("%d %d\n", point_t, point_h);
    return 0;
}
