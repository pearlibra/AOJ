#include <iostream>
#include <string>

using namespace std;

int main() {
    string number;
    int i, sum;

    sum = 0;

    cin >> number;
    while (number[0] != 48) {
        for (i=0;i<number.length();i++) {
            sum += (int)number[i] - 48;
        }
        cout << sum << endl;
        sum = 0;
        cin >> number;
    }
    return 0;
}
