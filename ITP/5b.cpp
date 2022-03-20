#include<iostream>
#include<string>
using namespace std;

int main() {
    int h, w;
    int i;
    string l;
    
    cin >> h >> w;

    while (h != 0 || w != 0) {
        cout << string(w, '#') << endl;
        l = '#' + string(w-2, '.') + '#';
        for(i=0; i<h-2; i++) {
            cout << l << endl;
        }
        cout << string(w, '#') << endl;
        cin >> h >> w;
        cout << '\n';
    }
    return 0;
}