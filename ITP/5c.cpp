#include<iostream>
using namespace std;

int main() {
    int h, w;
    
    cin >> h >> w;

    while (h != 0 || w != 0) {
        int count_w = 0;
        int count_h = 0;
        while (count_h < h) {
            if (count_w == w) {
            cout << '\n';
            count_h += 1;
            count_w = 0;
            } else if ((count_w % 2 == 0 && count_h % 2 == 0) || (count_w % 2 == 1 && count_h % 2 == 1)) {
                cout << '#';
                count_w += 1;
            } else if ((count_w % 2 == 0 && count_h % 2 == 1) || (count_w % 2 == 1 && count_h % 2 == 0)) {
                cout << '.';
                count_w += 1;
            }
        }
        cin >> h >> w;
        cout << '\n';
    }   
    return 0;
}