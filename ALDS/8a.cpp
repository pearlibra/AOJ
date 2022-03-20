#include <iostream>
#include <cstdlib>
#include <string>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;
#define NIL NULL

Node root;

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = (Node)malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while (x != NIL) {
      y = x;
      if (z->key < x->key) {
          x = x->left;
      }
      else {
          x = x->right;
      }
  }
  z->parent = y;

  if (y == NIL) {
      root = z;
  } 
  else if (z->key < y->key) {
      y->left = z;
  } 
  else {
      y->right = z;
  }
}

void inorder(Node u){
  if (u->left != NIL) {
      inorder(u->left);
  }

  std::cout << " " << u->key;

  if (u->right != NIL) {
      inorder(u->right);
  }
}

void preorder(Node u){
  std::cout << " " << u->key;

  if (u->left != NIL) {
      preorder(u->left);
  }

  if (u->right != NIL) {
      preorder(u->right);
  }
}


int main(){
  int n, i, x;
  std::string com;
  std::cin >> n;

for ( i = 0; i < n; i++ ){
    std::cin >> com;
    if ( com[0] == 'i' ){
    scanf("%d", &x);
    insert(x);
    } else if ( com[0] == 'p' ){
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    }
}
  return 0;
}