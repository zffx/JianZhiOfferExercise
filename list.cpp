#include <iostream>

#include "list.h"

ListNode::ListNode(): mValue (0), mNext (nullptr)
{
}

ListNode* ListNode::createListNode(int value)
{
    ListNode *node = new ListNode();
    node->mValue = value;
    node->mNext = nullptr;
    return node;
}

List::List() : mHead(nullptr)
{
}

List::List(ListNode* head) : mHead(head)
{
    if(!mHead)
    {
        return;
    }
    mHead->mNext = nullptr;
}

void List::appendNode(int value)
{
  ListNode *node = ListNode::createListNode(value);
  
  if (!mHead) {
    mHead = node;
    return;
  }
  
  ListNode *index = mHead;
  while (index->mNext != nullptr)
  {
    index = index->mNext;
  }
  index->mNext = node;
}

void List::printList(std::ostream &out)
{
    ListNode *index = mHead;

    out << "printList: " << std::endl;
    while (index!= nullptr)
    {
        out << index->mValue << " \t";
        index = index->mNext;
    }
  out << std::endl;
}
