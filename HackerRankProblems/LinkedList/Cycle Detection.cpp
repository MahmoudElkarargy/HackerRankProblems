////
////  Cycle Detection.cpp
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
//bool has_cycle(SinglyLinkedListNode* head) {
//    /* Fast pointer which moves two steps */
//    SinglyLinkedListNode* fastPtr = head;
//    while(fastPtr != NULL && fastPtr->next != NULL){
//        /* incrment pointers */
//        head = head->next;
//        fastPtr = fastPtr->next->next;
//        /* if they are equal then cycle detected */
//        if(head == fastPtr)
//            return true;
//    }
//    return false;
//}
//
