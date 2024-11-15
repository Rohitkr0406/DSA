#include <stdio.h>
#include <stdlib.h>

enum Color { RED, BLACK };

struct Node {
    int data;
    struct Node *left, *right, *parent;
    enum Color color;
};

struct Node* createNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = node->parent = NULL;
    node->color = RED;
    return node;
}

void rotateLeft(struct Node** root, struct Node* node) {
    struct Node* rightChild = node->right;
    node->right = rightChild->left;
    if (rightChild->left) rightChild->left->parent = node;
    rightChild->parent = node->parent;
    if (!node->parent) *root = rightChild;
    else if (node == node->parent->left) node->parent->left = rightChild;
    else node->parent->right = rightChild;
    rightChild->left = node;
    node->parent = rightChild;
}

void rotateRight(struct Node** root, struct Node* node) {
    struct Node* leftChild = node->left;
    node->left = leftChild->right;
    if (leftChild->right) leftChild->right->parent = node;
    leftChild->parent = node->parent;
    if (!node->parent) *root = leftChild;
    else if (node == node->parent->left) node->parent->left = leftChild;
    else node->parent->right = leftChild;
    leftChild->right = node;
    node->parent = leftChild;
}

void fixInsertion(struct Node** root, struct Node* node) {
    struct Node *parent = NULL, *grandparent = NULL;
    while (node != *root && node->color == RED && node->parent->color == RED) {
        parent = node->parent;
        grandparent = parent->parent;

        if (parent == grandparent->left) {
            struct Node* uncle = grandparent->right;
            if (uncle && uncle->color == RED) {
                grandparent->color = RED;
                parent->color = BLACK;
                uncle->color = BLACK;
                node = grandparent;
            } else {
                if (node == parent->right) {
                    rotateLeft(root, parent);
                    node = parent;
                    parent = node->parent;
                }
                rotateRight(root, grandparent);
                enum Color temp = parent->color;
                parent->color = grandparent->color;
                grandparent->color = temp;
                node = *root;
            }
        } else {
            struct Node* uncle = grandparent->left;
            if (uncle && uncle->color == RED) {
                grandparent->color = RED;
                parent->color = BLACK;
                uncle->color = BLACK;
                node = grandparent;
            } else {
                if (node == parent->left) {
                    rotateRight(root, parent);
                    node = parent;
                    parent = node->parent;
                }
                rotateLeft(root, grandparent);
                enum Color temp = parent->color;
                parent->color = grandparent->color;
                grandparent->color = temp;
                node = *root;
            }
        }
    }
    (*root)->color = BLACK;
}

void insert(struct Node** root, int data) {
    struct Node* newNode = createNode(data);
    struct Node* y = NULL;
    struct Node* x = *root;

    while (x != NULL) {
        y = x;
        if (newNode->data < x->data) x = x->left;
        else x = x->right;
    }

    newNode->parent = y;
    if (!y) *root = newNode;
    else if (newNode->data < y->data) y->left = newNode;
    else y->right = newNode;

    fixInsertion(root, newNode);
}

void fixDeletion(struct Node** root, struct Node* node) {
    // Deletion fix logic here (omitted for brevity)
}

void deleteNode(struct Node** root, int data) {
    // Node deletion logic here (omitted for brevity)
}

void inorder(struct Node* root) {
    if (root) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    struct Node* root = NULL;
    insert(&root, 10);
    insert(&root, 20);
    insert(&root, 30);
    inorder(root);
    return 0;
}
