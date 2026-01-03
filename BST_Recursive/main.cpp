#include <iostream>
#include "tree.h"

using namespace std;

int main()
{
    int nodes, i, num, searchNum;
    adrnode root, p;

    createTree_103012440006(root);
    cout << "How many nodes you want to input?";
    cin >> nodes;
    for (i = 0; i < nodes; i++) {
        cout << "Insert node: ";
        cin >> num;
        insertNode_103012440006(root, createNode_103012440006(num));
    }

    cout << "\nEnter the value of the node you want to search for: ";
    cin >> searchNum;

    if (searchNode_103012440006(root, searchNum) != nullptr) {
        cout << "Node with the value of " << searchNum << " is found!";
    } else {
        cout << "Node with the value of " << searchNum << " is not found!";
    }

    cout << "\n\nPrint BST (inorder traversal): ";
    displayTree_Inorder(root);
    printBST(root, 0, 5);
    cout << endl;

    cout << "\nEnter the value of the node you want to delete for: ";
    cin >> searchNum;

    p = deleteNode(root, searchNum);

    cout << "\n\nPrint BST (inorder traversal) after deletion: ";
    displayTree_Inorder(root);
    printBST(root, 0, 5);
    cout << endl;

    cout << "Number of nodes: " << countNodes_103012440006(root) << endl;
    cout << "Smallest Value: " << getMinValue_103012440006(root) << endl;
    cout << "Largest Value: " << getMaxValue_103012440006(root) << endl;

    return 0;
}
