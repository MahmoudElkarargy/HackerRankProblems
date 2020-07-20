////
////  Compare two linked list.cpp
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
//bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
//    //Two list won't be equal if and only if length isn't equal or content isn't the same.
//    
//    //We reached the end of the two lists.
//    if(head1->next == NULL && head2->next == NULL)
//        return true;
//    //Diffrent length.
//    else if(head1->next == NULL || head2->next == NULL)
//        return false;
//    //Compare content
//    if(head1->data != head2->data)
//        return false;
//    //Compare next item.
//    return compare_lists(head1->next, head2->next);
//}
