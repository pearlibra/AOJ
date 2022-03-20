#include <iostream>
#include <string>

using namespace std;

class process {
public:
    char name[10];
    int time;
};

void enqueue(process *p, int n, int *tail, process e) {
    p[*tail] = e;
    if (*tail == n) {
        *tail = 0;
    } else {
        *tail += 1; 
    }
}

process dequeue(process *p, int n, int *head) {
    process e = p[*head];
    if (*head == n) {
        *head = 0;
    } else {
        *head += 1;
    }
    return e;
}

int main() {
    int n, q;
    cin >> n >> q;
    process p[n+1];
    int head = 0;
    int tail = n;
    int count = 0;

    for (int i=0; i<n; i++) {
        cin >> p[i].name >> p[i].time;
    }

    while ( head != tail ) {
        process e = dequeue(p, n, &head);
        if (q >= e.time) {
            count += e.time;
            cout << e.name << ' ' << count << endl;
        }
        else {
            count += q;
            e.time -= q;
            enqueue(p, n, &tail, e);
        }
    }
    return 0;
}