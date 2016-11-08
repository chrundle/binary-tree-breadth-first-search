#include <iostream>

void postorder (node * root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        std::cout << root->data << endl;
    }
}
