#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

typedef int infotype;
typedef struct node *adrnode;

struct node {
    infotype info;
    adrnode left;
    adrnode right;
};

void createTree_103012440006(adrnode &root);
adrnode createNode_103012440006(infotype x);
void insertNode_103012440006(adrnode &root, adrnode p);
adrnode searchNode_103012440006(adrnode root, infotype x);
void displayTree_Inorder(adrnode root);
int countNodes_103012440006(adrnode root);
infotype getMinValue_103012440006(adrnode root);
infotype getMaxValue_103012440006(adrnode root);
adrnode deleteNode(adrnode &root, infotype x);
adrnode getParentNode(node &root, infotype x);
void printBST(adrnode root, int space = 0, int gap = 5);
#endif // TREE_H_INCLUDED
