#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string t, w;
    int count, i;

    count = 0;

    cin >> w;

    while (cin >> t) {
        if (t == "END_OF_TEXT") {
            break;
        }
        for (i=0; i<t.length(); i++) {
            t[i] = tolower(t[i]);
        }
        if (w == t) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}