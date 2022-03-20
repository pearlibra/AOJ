#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;
class Node {
    public:
        int key;
        Node *next, *prev;
};

Node *nil;

Node* listSearch(int key) {
    // リストの先頭から指定したkeyを持ってるNodeが見つかるまで探す．見つかったら返す．見つからなければnil返す
    Node *current = nil->next;
    while (current != nil && current->key != key) {
        current = current->next;
    }
    return current;
}

void init() {
    // 番兵初期化
    nil = (Node *)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}

void printList() {
    // リストの要素を全てスペース区切りで出力
    Node *current = nil->next;
    int isf = 0;
    while (1) {
        if (current == nil) {
            break;
        }
        if (isf++ > 0) {
            printf(" ");
        }
        printf("%d", current->key);
        current = current->next;
    }
    printf("\n");
}

void deleteNode(Node *t) {
    if (t == nil) {
        return;
    }
    t->prev->next = t->next;
    t->next->prev = t->prev;
    free(t);
}

void deleteFirst() {
    deleteNode(nil->next);
}

void deleteLast() {
    deleteNode(nil->prev);
}

void deleteKey(int key) {
    deleteNode(listSearch(key));
}

void insert(int key) {
    // リストの先頭に与えられたキーを持つ新ノード追加
    Node *x = (Node *)malloc(sizeof(Node));
    x->key = key;
    x->next = nil->next;
    nil->next->prev = x;
    nil->next = x;
    x->prev = nil;
}

int main() {
    int key, n, i;
    int size = 0;
    char com[20];
    int np = 0, nd = 0;
    scanf("%d", &n);
    init();
    for (i=0; i<n; i++) {
        scanf("%s%d", com, &key);
        if (com[0] == 'i') {
            insert(key);
            np++;
            size++;
        }
        else if (com[0] == 'd') {
            if (strlen(com) > 6) {
                if (com[6] == 'F') {
                    deleteFirst();
                }
                else if (com[6] == 'L') {
                    deleteLast();
                }
            } else {
                deleteKey(key);
                nd++;
            }
            size--;
        }
    }
    printList();
    return 0;
}