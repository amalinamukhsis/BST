#include <iostream>
#include <cmath>
#include "tree.h"

using namespace std;

void createTree(adrnode &root){
    root = nullptr;
}
adrnode createNode(infotype x) {
    adrnode p;

    p = new node;
    p->info = x;
    p->left = nullptr;
    p->right = nullptr;

    return p;
}

void insertNode(adrnode &root, adrnode p) {
    if (root == nullptr) {
        root = p;
    } else if (p->info < root->info) {
        insertNode(root->left, p);
    } else {
        insertNode(root->right, p);
    }
}
adrnode searchNode(adrnode root, infotype x) {
    if (root == nullptr) {
        return nullptr;
    } else if (x < root->info) {
        return searchNode(root->left, x);
    } else if (x > root->info) {
        return searchNode(root->right, x);
    }
    return root;
}

adrnode minValueNode(adrnode root) {
    if (root->left != nullptr) {
        return minValueNode(root->left);
    }
    return root;
}
adrnode deleteNode(adrnode &root, infotype x) {
    adrnode temp;
    if (root == nullptr) {
        return root;
    // find node to delete
    }else if (x < root->info) {
        root->left = deleteNode(root->left, x);
    } else if (x > root->info) {
        root->right = deleteNode(root->right, x);
    } else {
        // Case 1: no child
        if (root->left == nullptr && root->right == nullptr) {
            temp = root;
            delete root;
            return nullptr;
        } // Case 2: one child
        else if (root->left == nullptr) {
            temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            temp = root->left;
            delete root;
            return temp;
        }
        else {
        // Case 3: node with two children
            temp = minValueNode(root->right);
            root->info = temp->info;
            root->right = deleteNode(root->right, temp->info);
        }
    }

    return root;
}

void displayTree_Inorder(adrnode root) {
    if (root != nullptr) {
        displayTree_Inorder(root->left);
        cout << root->info << " ";
        displayTree_Inorder(root->right);
    }
}



