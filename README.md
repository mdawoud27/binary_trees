# Binary Trees

This project is about binary trees and includes various functions to work with binary trees, such as finding the height, depth, and size of a tree, checking if a tree is balanced, and more.

## Introduction

This project is focused on implementing various operations and functionalities related to binary trees in the C programming language. Binary trees are hierarchical data structures that consist of nodes connected by edges. Each node in a binary tree has at most two children, often referred to as the left child and the right child.

## General Topics
- What is a binary tree.

- What is the difference between a binary tree and a - Binary Search Tree.
- What is the possible gain in terms of time complexity compared to linked lists.
- What are the depth, the height, the size of a binary tree.
- What are the different traversal methods to go through a binary tree.
- What is a complete, a full, a perfect, a balanced binary tree.

## Resources
**Read or watch:**

- [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
- [Tree Traversal](https://www.programiz.com/dsa/tree-traversal)
- [Data structures: Binary Tree](https://www.youtube.com/watch?v=H5JubkIy_p8)

## More info for implementation this project
### Data structures
Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.

**Basic Binary Tree**
```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

### Print function
To match the examples in the tasks, you are given [this function](https://github.com/alx-tools/0x1C.c)

This function is used only for visualization purposes.
