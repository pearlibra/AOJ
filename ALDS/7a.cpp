#include <iostream>
#include <string>
#include <vector>

using namespace std;

class node {
    public:
        int num;
        int parent;
        int child_num;
        int depth;
        string nodetype;
        vector<int> child;

        node() {
            parent = -1;
        }
};

int main() {
    int c = 0, i, j, t, n;
    node tmp;
    cin >> n;
    node a[n];


    while (c < n) {
        cin >> i;
        a[i].num = i;
        cin >> a[i].child_num;
        for (j = 0; j < a[i].child_num; j++) {
            cin >> t;
            a[i].child.push_back(t);
            a[t].parent = i;
        }
        c++;
    }

    for (i = 0; i < n; i++) {
        t = 0;
        if (a[i].parent == -1) {
            a[i].nodetype = "root";
            a[i].depth = 0;
        }
        else {
            tmp = a[i];
            while (tmp.parent != -1) {
                t++;
                tmp = a[tmp.parent];
            }
            a[i].depth = t;
            if (a[i].child.empty()) a[i].nodetype = "leaf";
            else a[i].nodetype = "internal node";
        }
    }

    for (i = 0; i < n; i++) {
        cout << "node " << a[i].num << ": parent = " << a[i].parent << ", depth = " << a[i].depth << ", " << a[i].nodetype << ", [";
        for (j = 0; j < a[i].child_num; j++) {
            if (j)cout << ", " << a[i].child[j];
            else cout << a[i].child[j];
        }
        cout << "]" << endl;
    }
    return 0;
}