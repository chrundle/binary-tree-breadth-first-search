#include <iostream>

void preorder (node * root) {
    if (root != NULL) {
        std::cout << root->data << endl;
        preorder(root->left);
        preorder(root->right);
    }
}
