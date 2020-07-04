//
//  Insert a node at the head.cpp
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

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    //1. Allocate a new Node and add data.
    SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data);
    //2. Make the next of the node to head.
    newNode->next = llist;
    //3. move the head to point to the new node
    llist = newNode;
    //4. Return new Node.
    return newNode;
}
