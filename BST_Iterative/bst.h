#ifndef BST_H_INCLUDED
#define BST_H_INCLUDED

typedef int infotype;
typedef struct node *adrnode;

struct node {
    infotype info;
    adrnode left;
    adrnode right;
};

void createTree(adrnode &root);
adrnode createNode(infotype x);
void insertNode(adrnode &root, adrnode p);
adrnode searchNode(adrnode root, infotype x);
void displayTree_Inorder(adrnode root);
int countNodes(adrnode root);
infotype getMinValue(adrnode root);
infotype getMaxValue(adrnode root);
adrnode deleteNode(adrnode &root, infotype x);


#endif // BST_H_INCLUDED
