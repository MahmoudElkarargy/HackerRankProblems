////
////  Find merge point of two Lists.cpp
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
////O(N^2)
//int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
//    /* Save a pointer to the head of the list */
//    SinglyLinkedListNode* headPtr = head1;
//    /* Loop till you find the matching nodes or list 2 is empty */
//    while (head2 != NULL) {
//        while (head1 != NULL) {
//            /* If found return data */
//            if(head1 == head2)
//                return head2->data;
//            /* Inc head 1 */
//            head1 = head1->next;
//        }
//        /* Restart agian by init the head 1 and inc head2 */
//        head1 = headPtr;
//        head2 = head2->next;
//    }
//    return 0;
//}
//
////Another solution:  make all the integer of list1 to negative. Then walk through the list2, till you get a negative integer. Once found => take it, change the sign back to positive and return.
//
//// O(n) solution!!
////You just sinc the two list iterators by connecting the ends of each list to the beginning of the next list:
//
//int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
//    /* Save a pointer to both heads of the list */
//    SinglyLinkedListNode* headPtr1 = head1;
//    SinglyLinkedListNode* headPtr2 = head2;
//    
//    /* Loop till you find the merge node */
//    while (headPtr1 != headPtr2) {
//        /* If you reached the end of one list start at the beginning of the other one */
//        if(headPtr1->next == NULL){
//            headPtr1 = head2;
//        }else{
//            headPtr1 = headPtr1->next;
//        }
//        //currentB
//        if(headPtr2->next == NULL){
//            headPtr2 = head1;
//        }else{
//            headPtr2 = headPtr2->next;
//        }
//    }
//    return headPtr1->data;
//}
