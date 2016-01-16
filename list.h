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
    void appendNode(int value);
    void printList(std::ostream &out);
public:
    ListNode* mHead;
};

#endif //LIST_H
