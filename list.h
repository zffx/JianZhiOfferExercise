#ifndef LIST_H
#define LIST_H

class ListNode
{
public:
    ListNode();
    ListNode(int value);
public:
    int mValue;
    ListNode *mNext;
};

class List
{
public:
    List();
    List(ListNode* head);
    void appendNode(ListNode *node);
    void printList(ListNode *head);
    //static unsigned int length(ListNode *head);
public:
    ListNode* mHead;
};

#endif //LIST_H
