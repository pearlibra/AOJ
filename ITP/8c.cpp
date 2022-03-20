#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int count[26] = {0};
    string text;
    int i;

    getline(cin, text);

    while (!(text.empty())) {
        for (i=0; i<text.length(); i++){
            if (islower(text[i])) {
                count[text[i]-97] += 1;
            } else if (isupper(text[i])) {
                count[text[i]-65] += 1;
            }
        }
        getline(cin, text);
    }
    for (i=0;i<26;i++) {
        printf("%c : %d\n", 97+i, count[i]);
    }
    return 0;
}
