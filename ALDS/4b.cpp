#include <iostream>
using namespace std;

int main() {
    int ns, nt;
    cin >> ns;
    int s[ns + 1];
    for (int i=0; i<ns; i++) {
        cin >> s[i];
    }
    cin >> nt;
    int t[nt];
    for (int i=0; i<nt; i++) {
        cin >> t[i];
    }
    int count = 0;

    for (int i=0; i < nt; i++) {
        int left = 0;
        int right = ns;
        while (left < right) {
            int mid = (left + right) / 2;
            if (s[mid] == t[i]) {
                count++;
                break;
            }
            else if (t[i] < s[mid]) {
                right = mid;
            }
            else {
                left = mid + 1;
            }
        }
    }
    cout << count << endl;

    return 0;
}