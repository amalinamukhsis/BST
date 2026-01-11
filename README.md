
[markdown.md](https://github.com/user-attachments/files/24553220/markdown.md)
# Analysis of Iterative and Recursive Algorithms in Binary Search tree (BST) Operations

This project is a part of final project for Complexity Algorithm Analysis Course at Telkom University.

## Problem Description

Binary Search Trees (BST) are fundamental data structures used to store, search, insert, and delete data efficiently. Unlike regular binary search, which operates on sorted arrays, a BST stores data on nodes arranged in a tree where the left child node value is smaller than the parent node value, and the right child node value is bigger than the parent node value. This structure makes a BST efficient and effective to store dynamic data (frequently changed data). This study case will analyse how iterative and recursive algorithms behave when applied to BST operations such as insertion, deletion and search, assuming the existing BST is already ordered according to BST rules. The goal of this study case is to evaluate the computational complexity, execution time and memory usage of iterative and recursive algorithms for various BST sizes and tree shapes. In the end, these findings will help developers choose the most appropriate algorithms for BST when storing and managing data in the database or main memory.


### Algorithm Description

To solve the problem of efficiently managing inventory data, a Binary Search Tree (BST) based algorithm is used to support insertion, searching, and deletion operations. Each inventory item is represented by a unique key value, allowing data to be stored in an ordered structure that enables efficient access and modification.
 
The insertion algorithm adopts both recursive and iterative approaches. In the recursive approach, the algorithm starts from the root and compares the new item’s key with the current node. If the key is smaller, the algorithm recursively proceeds to the left subtree, if larger, it proceeds to the right subtree until an empty position is found. This approach is straightforward and dynamically handles input sizes. However, recursive calls introduce overhead and increase stack usage, which may reduce efficiency for large or highly unbalanced trees. The iterative insertion approach performs the same comparisons using loop based traversal, eliminating recursive overhead and making it more suitable for larger input sizes.
 
Similarly, the searching algorithm is implemented using both recursive and iterative methods. At each step, the algorithm compares the target value with the current node and moves either to the left or right subtree based on the comparison result. This allows the algorithm to reduce the search space efficiently. While the recursive method is simpler to implement, the iterative method avoids deep recursion and provides better performance stability when the tree height increases.
 
The deletion algorithm handles three distinct cases: deleting a leaf node, deleting a node with one child, and deleting a node with two children. In the case of two children, the algorithm replaces the deleted node with its inorder successor to preserve the BST ordering property. This operation ensures that the tree remains valid after deletion and is primarily implemented using recursive restructuring.


## Conclusion

In general, the big-o notation for binary search trees for every notation are equal. (log(n)) is the complexity for every BST operation when it is approximately balanced, but when the BST is skewed, the complexity becomes O(n). This defines that for every existing approximately balanced BST, the three operations are effective, and as the input size n grows, the running time increases very slowly, because the problem size is reduced by a constant factor at each step. Furthermore, the space complexity of recursive approach is O(h) as it requires stacking in a memory for every procedure call, while the iterative approach has space complexity of a constant O(1). However, big-o notation itself cannot determine which approach (iterative or recursive) is more efficient because the big-o notation for both recursives is the same. Therefore, a graph of input size vs running time for iterative and recursive approaches is necessary.

In the program, the user inputs n nodes, then searches for and deletes one node. The resulting expected graph shows the performance of the entire program, not each operation separately. Because n nodes are inserted while only one node is searched and deleted, insertion is expected to be the most expensive operation.
 
Overall, the BST-based algorithm is suitable for small to medium-sized inventory systems that require efficient insertion, searching, and deletion operations. The recursive approach offers simplicity and clarity, while the iterative approach improves scalability and performance for larger datasets. The choice between these approaches depends on input size, tree structure, and system resource constraints

## Documentation

[Report on the comparative analysis of iterative and recursive algorithm of Binary Search Tree (BST) operations](https://docs.google.com/document/d/1Ii-Jry0saPnS_NudsyKHLulvE7D6oxYjt9RVn71UwxE/edit?usp=sharing).
