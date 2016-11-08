#include <cstdlib>
#include "node.h"

void inorder (node * root) {
    if (root != NULL) {
        inorder(root->left);
        visitPrint (root); 
        inorder(root->right);
    }
}
