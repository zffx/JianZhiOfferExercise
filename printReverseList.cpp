#include "list.h"

#include <iostream>
#include <stack>

namespace Q5{

void printReverseListByStack(ListNode *head)
{
    if(!head)
    {
        return;
    }

    std::stack<ListNode*> nodeStack;
    ListNode* index = head;
    while (index!= nullptr)
    {
        nodeStack.push(index);
        index = index->mNext;
    }

    std::cout << "Print List in reversed order by using stack: " << std::endl;
    while (!nodeStack.empty())
    {
        std::cout << nodeStack.top()->mValue << "\t" ;
        nodeStack.pop();
    }
    std::cout << std::endl;
}
  
  void printReverseListByRecursion(ListNode *head)
  {
    if(!head)
      return;
    if(head->mNext != nullptr)
    {
      printReverseListByRecursion(head->mNext);
    }
    std::cout << head->mValue << "\t";
  }

void testQ5()
{
    List list;
    for(int i = 0; i < 6; ++i)
    {
        list.appendNode(i);
    }
    list.printList(std::cout);

    printReverseListByStack(list.mHead);
    std::cout << "Print List in reversed order by using recursion: " << std::endl;
    printReverseListByRecursion(list.mHead);
    std::cout<<std::endl;
}

} //namespace Q5
