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

    int j = 0;
    int count = 0;

    for (int i=0; i<nt; i++) {
        j = 0;
        s[ns] = t[i];
        while (s[j] != t[i]) {
            j++;
        }
        if (j == ns) {
            continue;
        }
        count++;
    }
    cout << count << endl;

    return 0;
}