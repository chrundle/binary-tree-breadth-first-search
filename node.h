/* binary tree structure for breadth first search*/
struct node {
    int data;       // data value stored at node
    node * left;    // left child of node
    node * right;   // right child of node
};


/* -------------------- Functions -------------------- */
/*  The following functions are used to initialize a 
    binary tree to test the breadth first searches
    preorder, inorder, and postorder.


/* --------------- visitInitializeNode --------------- */
/*  Given a node in a binary tree at a given height
    this function stores a random data value and 
    initializes its left and right children.

    Input variables:
        root  : node at current position in tree
        height: height of node root in tree            */

void visitInitializeNode (node * root, int height) {
    int data = rand() % 99 + 1; // initialize data as random int

    if (height > 0) { // store data in root and initialize children
    node * left = new node();   // create node for left child
    node * right = new node();  // create node for right child

    root->data = data;          // store data in root
    root->left = left;          // update pointer to left child
    root->right = right;        // update pointer to right child
    }
    else if (height == 0) { // store data in root
        root->data = data;      // store data in root
        root->left = NULL;      // set left child to NULL
        root->right = NULL;     // set right child to NULL
    }
    else { // node height is below minimum height threshold
        // do nothing    
    }
}

/* -------------------- visitPrint -------------------- */
/*  Given a node in a binary tree this function prints
    the data value at the node.

    Input variables:
        root  : node at current position in tree      */

void visitPrint (node * root) {
    if (root != NULL) { // root is not NULL
        std::cout << root->data << " "; // print data value
    }
}

/* ---------------- initializeBinaryTree ---------------- */
/*  Given a node in a binary tree at a given height this
    function uses a breadth first search to
        1) visit a node and initialize it by calling 
           visitInitializeNode
        2) repeat step 1 on the left and right children of
           the given node

    Input variables:
        root  : node at current position in tree
        height: height of node root in tree               */

void initializeBinaryTree (node * root, int height) {
    if (height >= 0) {
        visitInitializeNode (root, height); 
        initializeBinaryTree(root->left, height - 1);
        initializeBinaryTree(root->right, height - 1);
    }
}
