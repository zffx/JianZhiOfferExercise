#ifndef BINARYTREE_H
#define BINARYTREE_H

class BinaryTreeNode
{
public:
  static BinaryTreeNode* createBinaryTreeNode(int value);
  static void printBinaryTreeNode(BinaryTreeNode *node);
  
private:
  BinaryTreeNode(int value);
  
public:
  int mValue;
  BinaryTreeNode* mLeft;
  BinaryTreeNode* mRight;
};

class BinaryTree
{
public:
  static void printBinaryTreePreOrder(BinaryTreeNode* root);
  static void printBinaryTreeLevelOrder(BinaryTreeNode* root);
  static void deleteBinaryTree(BinaryTreeNode* root);
  static unsigned int depth(BinaryTreeNode* root);
  static unsigned int size(BinaryTreeNode* root);
};
#endif //BINARYTREE_H