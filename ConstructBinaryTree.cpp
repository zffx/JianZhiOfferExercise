//     4
//    / \
//   1   5
//  / \   \
// 9   0   6
//    /
//   8
// preorder 4, 1, 9, 0, 8, 5, 6
// inorder  9, 1, 8, 0, 4, 5, 6

#include "Declarations.h"
#include "BinaryTree.h"

#include <iostream>

using std::cout;
using std::endl;

namespace Q6
{
  BinaryTreeNode* constructBinaryTree(int* preorderHead, int* inorderHead, unsigned int arrayLength)
  {
    BinaryTreeNode *root = BinaryTreeNode::createBinaryTreeNode(*preorderHead);
    //find root from inorder array, and split left & right sub binary tree
    for(int* inorderIndex = inorderHead;
        inorderIndex != inorderIndex + arrayLength - 1;
        ++inorderIndex)
    {
      if (*inorderIndex == *preorderHead)
      {
        //left subtree
        if(inorderIndex - inorderHead >= 1)
        {
          root->mLeft =
          constructBinaryTree(preorderHead + 1,
                              inorderHead,
                              inorderIndex - inorderHead);
        }
        
        //right subtree
        if (arrayLength - (inorderIndex - inorderHead) - 1 >= 1)
        {
          root->mRight =
          constructBinaryTree(preorderHead + 1 + (inorderIndex - inorderHead),
                               inorderIndex + 1,
                               arrayLength - (inorderIndex - inorderHead) - 1);
        }
        break;//it's important to break after finding the root value in inorder array
      }
    }
    return root;
  }
  
  void testQ6()
  {
    int preorder[7] =  {4, 1, 9, 0, 8, 5, 6};
    int inorder[7]  = {9, 1, 8, 0, 4, 5, 6};
    BinaryTreeNode* binaryTree = constructBinaryTree(preorder, inorder, 7);
    BinaryTree::printBinaryTreePreOrder(binaryTree);
    //BinaryTree::printBinaryTreeLevelOrder(binaryTree);
    cout << "depth of the tree: " << BinaryTree::depth(binaryTree) << endl;
    cout << "size of the tree: " << BinaryTree::size(binaryTree) << endl;
    BinaryTree::deleteBinaryTree(binaryTree);
  }
}