////
////  Print in a reverse order.cpp
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
//void reversePrint(SinglyLinkedListNode* head) {
//    // Base case
//    if (head == NULL)
//    return;
//    
//    // print the list after head node
//    reversePrint(head->next);
//    
//    // After everything else is printed, print head
//    cout << head->data << endl;
//}
