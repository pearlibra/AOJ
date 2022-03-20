#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    int i;
    for (i=0;i<text.size();i++) {
        if (isalpha(text[i])){
            if (islower(text[i])) {
                printf("%c", toupper(text[i]));
            } else {
                printf("%c", tolower(text[i]));
            }
        } else if (text[i] == 32) {
            printf("%c", 32);
        } else {
            printf("%c", text[i]);
        }
    }
    cout << endl;
    return 0;
}
