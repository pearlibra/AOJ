#include <iostream>
#include <string>
using namespace std;

int main() {
    int operand[101];
    string x;
    int tail = 0;

    while(cin >> x) {
        if (x == "+") {
            operand[tail-2] = operand[tail-2] + operand[tail-1];
            tail--;
        }
        else if (x == "*") {
            operand[tail-2] = operand[tail-2] * operand[tail-1];
            tail--;
        }
        else if (x == "-") {
            operand[tail-2] = operand[tail-2] - operand[tail-1];
            tail--;
        }
        else {
            operand[tail] = stoi(x);
            tail++;
        }
    }
    cout << operand[tail-1] << endl;
    return 0;
}