////
////  Delete a Node.cpp
////  HackerRankProblems
////
////  Created by Mahmoud Elkarargy on 7/5/20.
////  Copyright © 2020 Mahmoud Elkarargy. All rights reserved.
////
//
//#include <iostream>
//
//using namespace std;
//
///*
// * For your reference:
// *
// * SinglyLinkedListNode {
// *     int data;
// *     SinglyLinkedListNode* next;
// * };
// *
// */
//
//class SinglyLinkedListNode {
//    public:
//        int data;
//        SinglyLinkedListNode *next;
//
//        SinglyLinkedListNode(int node_data) {
//            this->data = node_data;
//            this->next = nullptr;
//        }
//};
//
//SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
//    /* 1. Store head node */
//    SinglyLinkedListNode* temp = head;
//    /* 2. If head needs to be removed */
//    if (position == 0)
//    {
//        head = temp->next;   // Change head
//        free(temp);               // free old head
//        return head;
//    }
//    /* 3. Find previous node of the node to be deleted */
//    for (int i=0; temp!=NULL && i<position-1; i++)
//         temp = temp->next;
//    
//    // Node temp->next is the node to be deleted
//    /* 4. Store pointer to the next of node to be deleted */
//    SinglyLinkedListNode* next = temp->next->next;
//    
//    /* 5. Unlink the node from linked list */
//    // Free memory.
//    free(temp->next);
//    /* 6. Unlink the deleted node from list */
//    temp->next = next;
//    /* 7. Return head */
//    return head;
//}
