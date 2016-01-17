#ifndef DECLARATIONS_H
#define DECLARATIONS_H

#include "List.h"
#include "BinaryTree.h"
namespace Q5 {
  void printReverseList(ListNode *head);
  void testQ5();
}

namespace Q6 {
  BinaryTreeNode* constructBinaryTree(int* preorderHead, int* inorderHead, unsigned int arrayLength);
  void testQ6();
}
#endif // DECLARATIONS_H
