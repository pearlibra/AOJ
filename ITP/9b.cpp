#include <iostream>
#include <string>
using namespace std;

int main() {
    string text, e;
    int m, i, h;

    e = '-';

    cin >> text;
    cin >> m;

    while (text != e) {
        for (i=0; i<m; i++) {
            cin >> h;
            text.insert(text.length(), text.substr(0, h));
            text.erase(0, h);
        }
        cout << text << endl;
        cin >> text;
        cin >> m;
    }
    
    return 0;
}