//
//  Insert a node at a spesific position.cpp
//  HackerRankProblems
//
//  Created by Mahmoud Elkarargy on 7/5/20.
//  Copyright © 2020 Mahmoud Elkarargy. All rights reserved.
//

#include <iostream>

using namespace std;

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    /* 1. allocate new node and add data to it */
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    /* 2. Store head node */
    SinglyLinkedListNode* temp = head;
    /* 3. loop till position-1 */
    while(position-1){
        /* 4.save the target node in temp */
        temp = temp->next;
        position --;
    }
    /* 5. Make the next of the newNode to the next of the target node */
    newNode->next = temp->next;
    /* 6. Make the list all conccted togther */
    temp->next = newNode;
    /* 7. Return refrence to the list */
    return head;
}
