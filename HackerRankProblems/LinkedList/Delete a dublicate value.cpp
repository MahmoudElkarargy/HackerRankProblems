////
////  Delete a dublicate value.cpp
////  HackerRankProblems
////
////  Created by Mahmoud Elkarargy on 7/12/20.
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
//SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
//    /* Keep track of the next item */
//    SinglyLinkedListNode* nextPtr = head->next;
//    /* Keep the head ptr of the list saved */
//    SinglyLinkedListNode* headPtr = head;
//    
//    while(head->next != NULL){
//        if(head->data != nextPtr->data){
//            head = nextPtr;
//        }
//        else{
//            /* Store pointer to the next of node to be deleted */
//            head->next = nextPtr->next;
//            // Free memory.
//            free(nextPtr);
//        }
//        nextPtr = head->next;
//    }
//    return headPtr;
//}
//
////Recursion solution.
//SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
//    if(head->next == NULL )
//        return head;
//    
//    SinglyLinkedListNode* temp = removeDuplicates(head->next);
//    
//    if(head->data == head->next->data){
//        /* Store pointer to the next of node to be deleted */
//        head->next = head->next->next;
//    }
//    return head;
//}
