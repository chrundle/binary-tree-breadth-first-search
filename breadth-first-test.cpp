#include <iostream>
#include <cstdlib>
#include "node.h"

void inorder (node * root) {
    if (root != NULL) {
        inorder(root->left);
        visitPrint (root); 
        inorder(root->right);
    }
}

int main () {
    int height, i;
    node * root = new node();
    node cur;

    height = rand() % 4 + 1;

    initializeBinaryTree(root, height);

    inorder (root);

    std::cout << std::endl;
        
    return 0;
}   
