#include <iostream>

class node 
{
public:
    int id;
    int parent;
    int left;
    int right;

    node() : parent(-1) {};
};

void preorder(node a[], int parent_index) {
    std::cout << " " << a[parent_index].id;

    if (a[parent_index].left != -1) {
        preorder(a, a[parent_index].left);
    }

    if (a[parent_index].right != -1) {
        preorder(a, a[parent_index].right);
    }
}

void inorder(node a[], int parent_index) {
    if (a[parent_index].left != -1) {
        inorder(a, a[parent_index].left);
    }

        std::cout << " " << a[parent_index].id;    

    if (a[parent_index].right != -1) {
        inorder(a, a[parent_index].right);
    }
}

void postorder(node a[], int parent_index) {
    if (a[parent_index].left != -1) {
        postorder(a, a[parent_index].left);
    }

    if (a[parent_index].right != -1) {
        postorder(a, a[parent_index].right);
    }

        std::cout << " " << a[parent_index].id;
}


int main() {
    int n, i, tmp, root_index;
    std::cin >> n;
    node a[n];

    for (i = 0; i < n; i++) {
        std::cin >> tmp;
        a[tmp].id = tmp;
        std::cin >> a[tmp].left >> a[tmp].right;
    }

    for (i = 0; i < n; i++) {
        if (a[i].left != -1) {
            a[a[i].left].parent = i;
        }
        if (a[i].right != -1) {
            a[a[i].right].parent = i;
        }
    }

    root_index = 0;
    while (a[root_index].parent != -1) {
        root_index++;
    }

    std::cout << "Preorder" << std::endl;
    preorder(a, root_index);
    std::cout << std::endl;

    std::cout << "Inorder" << std::endl;
    inorder(a, root_index);
    std::cout << std::endl;

    std::cout << "Postorder" << std::endl;
    postorder(a, root_index);
    std::cout << std::endl;

    return 0;
}