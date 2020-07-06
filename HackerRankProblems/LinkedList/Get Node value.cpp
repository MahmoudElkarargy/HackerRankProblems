//
//  Get Node value.cpp
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
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    
    SinglyLinkedListNode* slowPtr = head;
    int index=0;
    while(head->next != NULL){
        head = head->next;
        //Make the slow pointer points only when the normal pointer exceds the positionFromTail.
        // Example is we have 2 3 4 5 7 8 and we wants the 2nd positionFromTail.
        // index = 0 && Head points to 2 && slowPtr points to 2
        // index = 1 && Head points to 3 && slowPtr points to 2
        // index = 2 && Head points to 4 && slowPtr points to 2
        // index = 3 && Head points to 5 && slowPtr points to 3     .. if list was only 2 3 4 5, 3 will be right answer
        // index = 4 && Head points to 7 && slowPtr points to 4
        // index = 5 && Head points to 8 && slowPtr points to 5
        if(index++ >= positionFromTail)
            slowPtr = slowPtr->next;
    }
    return slowPtr->data;
}
