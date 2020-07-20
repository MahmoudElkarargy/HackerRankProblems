////
////  Merage two sorted lists.cpp
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
//SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
//    
//    SinglyLinkedListNode* result = NULL;
//      
//    /* Base cases */
//    if (head1 == NULL)
//        return(head2);
//    else if (head2 == NULL)
//        return(head1);
//      
//    /* Pick either a or b, and recur */
//    if (head1->data <= head2->data)
//    {
//        result = head1;
//        result->next = mergeLists(head1->next, head2);
//    }
//    else
//    {
//        result = head2;
//        result->next = mergeLists(head1, head2->next);
//    }
//    return(result);
//}
//
