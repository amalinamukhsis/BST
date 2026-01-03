#include <iostream>
#include "tree.h"

using namespace std;

void createTree_103012440006(adrnode &root){
    root = nullptr;
}
adrnode createNode_103012440006(infotype x) {
    adrnode p;

    p = new node;
    p->info = x;
    p->left = nullptr;
    p->right = nullptr;

    return p;
}

void insertNode_103012440006(adrnode &root, adrnode p) {
    if (root == nullptr) {
        root = p;
    } else if (p->info < root->info) {
        insertNode_103012440006(root->left, p);
    } else {
        insertNode_103012440006(root->right, p);
    }
}
adrnode searchNode_103012440006(adrnode root, infotype x) {
    if (root == nullptr) {
        return nullptr;
    } else if (x < root->info) {
        return searchNode_103012440006(root->left, x);
    } else if (x > root->info) {
        return searchNode_103012440006(root->right, x);
    }
    return root;
}
adrnode getParentNode(adrnode &root, infotype x) {
    adrnode parent = nullptr;
    adrnode current = root;

    while (current != nullptr && current->info != x) {
        parent = current;
        if (x < current->info)
            current = current->left;
        else
            current = current->right;
    }
    return parent;
}
adrnode minValueNode(adrnode root) {
    if (root->left != nullptr) {
        return minValueNode(root->left);
    }
    return root;
}
adrnode minValueNode(adrnode root) {
    if (root->left != nullptr) {
        return minValueNode(root->left);
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
}
infotype getMinValue_103012440006(adrnode root) {
    if (root->left != nullptr) {
        return getMinValue_103012440006(root->left);
    } else {
        return root->info;
    }
}
infotype getMaxValue_103012440006(adrnode root) {
    if (root->right != nullptr) {
        return getMaxValue_103012440006(root->right);
    } else {
        return root->info;
    }
}
void displayTree_Inorder(adrnode root) {
    if (root != nullptr) {
        displayTree_Inorder(root->left);
        cout << root->info << " ";
        displayTree_Inorder(root->right);
    }
}
int countNodes_103012440006(adrnode root) {
    if (root == nullptr) {
        return 0;
    }
    return 1 + countNodes_103012440006(root->left) + countNodes_103012440006(root->right);
}

void printBST(adrnode root, int space, int gap) {
    if (root == nullptr)
        return;

    // Increase distance between levels
    space += gap;

    // Print right child first
    printBST(root->right, space);

    // Print current node
    cout << endl;
    for (int i = gap; i < space; i++)
        cout << " ";
    cout << root->info << "\n";

    // Print left child
    printBST(root->left, space);
}

