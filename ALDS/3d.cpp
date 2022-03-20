#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    stack<int> whole;
    stack<pair<int, int> > part;
    char ch;
    int sum = 0;
    for (int i=0; cin >> ch; i++) {
        if (ch == '\\') whole.push(i);
        else if (ch == '/' && whole.size() > 0) {
            int j = whole.top();
            whole.pop();
            sum += i - j;
            int a = i - j;
            while (part.size() > 0 && part.top().first > j) {
                a += part.top().second;
                part.pop();
            }
            part.push(make_pair(j, a));
        }
    }

    vector<int> ans;
    int t = 0;
    while (part.size() > 0) {
        ans.push_back(part.top().second);
        part.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << sum << endl;
    cout << ans.size();
    for (int i=0; i < ans.size(); i++) {
        cout << " ";
        t += ans[i];
        cout << ans[i];
    }
    cout << endl;
    
    return 0;
}