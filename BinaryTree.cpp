#include "BinaryTree.h"

#include <iostream>
#include <queue>
#include <algorithm>

using std::cout;
using std::endl;

BinaryTreeNode* BinaryTreeNode::createBinaryTreeNode(int value)
{
  BinaryTreeNode *node = new BinaryTreeNode(value);
  return node;
}

BinaryTreeNode::BinaryTreeNode(int value) : mValue(value), mLeft(nullptr), mRight(nullptr)
{
  
}

void BinaryTreeNode::printBinaryTreeNode(BinaryTreeNode *node)
{
  if(node)
  {
    cout << "mValue: " << node->mValue << endl;
    
    if(node->mLeft == nullptr)
    {
      cout << "left child: null" << endl;
    } else
    {
      cout << "left child: " << node->mLeft->mValue << endl;
    }
    
    if(node->mRight == nullptr)
    {
      cout << "right child: null" << endl;
    } else
    {
      cout << "right child: " << node->mRight->mValue << endl;
    }
    
    cout << endl;
  } else
  {
    cout << "Node is nullptr." << endl;
  }
}

void BinaryTree::printBinaryTreePreOrder(BinaryTreeNode* root)
{
  if(root)
  {
    BinaryTreeNode::printBinaryTreeNode(root);
    if(root->mLeft != nullptr)
    {
      printBinaryTreePreOrder(root->mLeft);
    }
    if(root->mRight != nullptr)
    {
      printBinaryTreePreOrder(root->mRight);
    }
  }
  return;
}

void BinaryTree::printBinaryTreeLevelOrder(BinaryTreeNode* root)
{
  if (root) {
  
  std::queue<BinaryTreeNode*> q;
  q.push(root);
  while(!q.empty() && q.front())
  {
    BinaryTreeNode::printBinaryTreeNode(q.front());
    if ((q.front())->mLeft != nullptr) {
      q.push((q.front())->mLeft);
    }
    if ((q.front())->mRight != nullptr) {
      q.push((q.front())->mRight);
    }
    q.pop();
  }
  }
 }

void BinaryTree::deleteBinaryTree(BinaryTreeNode* root)
{
  if (root)
  {
    deleteBinaryTree(root->mLeft);
    deleteBinaryTree(root->mRight);
    delete root;
    root = nullptr;
  }
}

unsigned int BinaryTree::depth(BinaryTreeNode* root)
{
  if(!root)
  {
    return 0;
  }
  
  unsigned int depthL = depth(root->mLeft);
  unsigned int depthR = depth(root->mRight);

  return std::max(depthL,depthR)+1;
}

unsigned int BinaryTree::size(BinaryTreeNode* root)
{
  if(!root)
  {
    return 0;
  }
  
  unsigned int count = 0;
  ++count;
  count += size(root->mLeft);
  count += size(root->mRight);
  return count;
}
