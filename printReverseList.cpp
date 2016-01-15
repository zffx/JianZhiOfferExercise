#include "list.h"

#include <iostream>
#include <stack>

namespace Q5{

void printReverseList(ListNode *head)
{
    if(!head)
    {
        return;
    }

    std::stack<ListNode*> nodeStack;
    ListNode* index = head;
    while (index->mNext != nullptr)
    {
        nodeStack.push(index->mNext);
        index = index->mNext;
    }

    std::cout << "Print List in reversed order: " << std::endl;
    while (!nodeStack.empty())
    {
        std::cout << nodeStack.top()->mValue << "\t" ;
        nodeStack.pop();
    }
    std::cout << std::endl;
}

void testQ5()
{
    List list;
    for(int i = 0; i < 6; ++i)
    {
        ListNode* node = ListNode::createListNode(i);
        list.appendNode(node);
    }
    list.printList(std::cout);
    //std::cout<<out;
    printReverseList(list.mHead);
}

} //namespace Q5
