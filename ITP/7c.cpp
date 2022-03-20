#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    int i, j;
    int sum;
    int num;
    cin >> r >> c;
    sum = 0;
    
    vector<int> last_record(c+1, 0);

    //入力を受け付ける
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            cin >> num;
            sum += num;
            last_record[j] += num;
            cout << num << ' ';
        }
        cout << sum << endl;
        sum = 0; 
    }

    for (i=0; i<c; i++) {
        cout << last_record[i] << ' ';
        sum += last_record[i];
    }
    cout << sum << endl;
    
    return 0;
}