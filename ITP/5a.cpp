#include<iostream>
#include<string>
using namespace std;

int main() {
    int h, w;
    int i;
    string l;
    
    cin >> h >> w;

    while (h != 0 || w != 0) {
        l = string(w, '#');
        for(i=0; i<h; i++) {
            cout << l << endl;
        }
        cout << '\n';
        cin >> h >> w;
    }
    
    return 0;
}
