#ifndef LIST_H
#define LIST_H

#include "iostream"

class ListNode
{
public:
    static ListNode* createListNode(int value);
private:
    ListNode();
public:
    int mValue;
    ListNode *mNext;
};

class List
{
public:
    List();
    List(ListNode *head);
    void appendNode(ListNode *node);
    void printList(std::ostream &out);
    //static unsigned int length(ListNode *head);
public:
    ListNode* mHead;
};

#endif //LIST_H
