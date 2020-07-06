//
//  Reverse a linkedList.cpp
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

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* current = head;
    SinglyLinkedListNode* prev = NULL, *next = NULL;
    while (current!= NULL){
        // Store next
        next = current->next;
        // Reverse current node's pointer
        current->next = prev;
      // Move pointers one position ahead.
      prev = current;
      current = next;
    }
    head = prev;
    return head;
}
