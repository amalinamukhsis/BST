#include <iostream>
#include "bst.h"

using namespace std;

void createTree(adrnode &root) {
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
    adrnode curr = root;
    adrnode prev;
    while (curr != nullptr) {
        prev = curr;
        if (curr->info > p->info) {
            curr = curr->left;
        } else if (curr->info < p->info) {
            curr = curr->right;
        } else {
            return;
        }
    }

    if (prev == nullptr) {
        root = p;
    } else if (p->info < prev->info) {
        prev->left = p;
    } else {
        prev->right = p;
    }
}
adrnode searchNode(adrnode root, infotype x) {
    adrnode curr = root;
    while (curr != nullptr && curr->info != x) {
        if (curr->info > x) {
            curr = curr->left;
        } else if (curr->info < x) {
            curr = curr->right;
        }
    }

   return curr;
}

adrnode deleteNode(adrnode &root, infotype x) {
    adrnode parent = nullptr;
    adrnode child = nullptr;
    adrnode succ, succParent;
    infotype temp;
    adrnode curr = root;

    while (curr != nullptr && curr->info != x) {
        parent = curr;
        if (curr->info > x) {
            curr = curr->left;
        } else if (curr->info < x) {
            curr = curr->right;
        }
    }

    if (curr == nullptr)
        return nullptr;
    else {
        // case 1: no child
        if (curr->left == nullptr && curr->right == nullptr) {
            child = nullptr;
        //  case 2: one child
        } else if (curr->left == nullptr) {
            child = curr->right;
        } else if (curr->right == nullptr) {
            child = curr->left;
        // case 3: two child
        } else {
            succ = curr->right;

            // Find inorder successor
            while (succ->left != nullptr) {
                succParent = succ;
                succ = succ->left;
            }

            // swap successor VALUE with will be deleted node
            curr->info = succ->info;

            // Prepare to delete successor
            parent = succParent;
            curr = succ;
        }

        if (parent == nullptr) {
            delete curr;
            root = child;
            return root;
        }else if (parent->left == curr) {
            parent->left = child;
        } else if (parent->right == curr) {
            parent->right = child;
        } else {
            parent->left = nullptr;
        }
    }

    delete curr;
    return root;
}
void displayTree_Inorder(adrnode root) {
    if (root != nullptr) {
        displayTree_Inorder(root->left);
        cout << root->info << " ";
        displayTree_Inorder(root->right);
    }
}
