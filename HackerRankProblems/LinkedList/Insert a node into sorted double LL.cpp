//
//  Insert a node into sorted double LL.cpp
//  HackerRankProblems
//
//  Created by Mahmoud Elkarargy on 7/13/20.
//  Copyright © 2020 Mahmoud Elkarargy. All rights reserved.
//

#include <iostream>

using namespace std;

class DoublyLinkedListNode {
    public:
        int data;
        DoublyLinkedListNode *next;
        DoublyLinkedListNode *prev;
    
        DoublyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
            this->prev = nullptr;
        }
};

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    /* Keep track of the head and prev pointers */
    DoublyLinkedListNode* headPtr = head;
    DoublyLinkedListNode* prev = NULL;
    /* loop to the end of list */
    while(head != NULL){
        if(data < head->data)
            break;
        prev = head;
        head = head->next;
    }
    /* Create a new node */
    DoublyLinkedListNode* newNode = new DoublyLinkedListNode(data);
    newNode->next = head;
    newNode->prev = prev;
    /* if it's not the last item */
    if(head != NULL)
        head->prev = newNode;
    /* if it's not the first */
    if(head != headPtr)
        prev->next = newNode;
    else return newNode;
    return headPtr;
}
