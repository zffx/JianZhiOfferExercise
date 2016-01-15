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
    }

    std::cout << "Print List in reversed order: " << std::endl;
    while (!nodeStack.empty())
    {
        std::cout << nodeStack.top() << "\t" ;
        nodeStack.pop();
    }
}

void testQ5()
{
    List list;
    for(int i = 0; i < 5; ++i)
    {
        ListNode node = ListNode(i);
        list.appendNode(&node);
    }
    list.printList(list.mHead);
    printReverseList(list.mHead);
}
}
