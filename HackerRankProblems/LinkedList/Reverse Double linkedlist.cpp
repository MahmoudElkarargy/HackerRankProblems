////
////  Reverse Double linkedlist.cpp
////  HackerRankProblems
////
////  Created by Mahmoud Elkarargy on 7/13/20.
////  Copyright © 2020 Mahmoud Elkarargy. All rights reserved.
////
//
//#include <iostream>
//
//using namespace std;
//
//class DoublyLinkedListNode {
//    public:
//        int data;
//        DoublyLinkedListNode *next;
//        DoublyLinkedListNode *prev;
//    
//        DoublyLinkedListNode(int node_data) {
//            this->data = node_data;
//            this->next = nullptr;
//            this->prev = nullptr;
//        }
//};
//
//DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
//    DoublyLinkedListNode* current = head;
//    DoublyLinkedListNode* prev = NULL, *next = NULL;
//    while (current!= NULL){
//        // Store next
//        next = current->next;
//        // Reverse current node's pointer
//        current->next = prev;
//        current->prev = next;
//        // Store prev
//        prev = current;
//        // Move pointers one position ahead.
//        current = next;
//    }
//    head = prev;
//    return head;
//}
