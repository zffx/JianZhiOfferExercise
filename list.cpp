#include <iostream>

#include "list.h"

ListNode::ListNode(): mValue (0), mNext (nullptr)
{
}

ListNode::ListNode(int value) : mValue (value), mNext (nullptr)
{
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

void List::printList(ListNode *head)
{
    if(!mHead)
    {
        return;
    }
    ListNode *index = mHead;
    std::cout << "printList: " << std::endl;
    while (index->mNext != nullptr)
    {
        std::cout << index->mNext->mValue << " \t" << std::endl;
        index = index->mNext;
    }
}
