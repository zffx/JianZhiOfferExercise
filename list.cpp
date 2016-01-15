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

void List::appendNode(ListNode *node)
{
    if(!mHead)
    {
        mHead = node;
        node->mNext = nullptr;
        return;
    }

    ListNode *index = mHead;
    while (index->mNext != nullptr)
    {
        index = index->mNext;
    }
    index->mNext = node;
    node->mNext = nullptr;
}

void List::printList(std::ostream &out)
{
    if(!mHead)
    {
        return;
    }
    ListNode *index = mHead;

    out << "printList: " << std::endl;
    while (index->mNext != nullptr)
    {
        out << index->mNext->mValue << " \t";
        index = index->mNext;
    }
  out << std::endl;
}
