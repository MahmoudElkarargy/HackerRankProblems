////
////  Print the Elements of a Linked List  print the elments of a linkedlist.cpp
////  HackerRankProblems
////
////  Created by Mahmoud Elkarargy on 6/20/20.
////  Copyright © 2020 Mahmoud Elkarargy. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//#define DATATYPE int
//using namespace std;
//
//class SinglyLinkedListNode{
//    public:
//        DATATYPE data;
//        SinglyLinkedListNode * next;
//};
//
//void printLinkedList(SinglyLinkedListNode* head) {
//    while (head != NULL) {
//           cout << head->data << endl;
//           head = head->next;
//       }
//}
//
//
///* Given a reference (pointer to pointer) to the head
//   of a list and an int, appends a new node at the end  */
//void append(struct SinglyLinkedListNode** head_ref, int newData)
//{
//    /* 1. allocate node */
//    SinglyLinkedListNode* newNode = new SinglyLinkedListNode();
//    /* Reference to head and incremented down to the tail */
//    SinglyLinkedListNode* last = *head_ref;
//    /* 2. put in the data  */
//    newNode->data = newData;
//    /* 3. This new node is going to be the last node, so make next
//    of it as NULL*/
//    newNode->next = NULL;
//    /* 4. If the Linked List is empty, then make the new node as head */
//    if (*head_ref == NULL)
//    {
//       *head_ref = newNode;
//       return;
//    }
//    /* 5. Else traverse till the last node */
//    while(last->next != NULL)
//        last = last->next;
//     /* 6. Change the next of last node */
//    last->next = newNode;
//}
//
//int main(){
//    int lengthOfList, newData;
//    /* Start with the empty list */
//    SinglyLinkedListNode* head = NULL;
//    cin >> lengthOfList;
//    
//    for (int i=0; i<lengthOfList; i++){
//        cin >> newData;
//        append(&head, newData);
//    }
//    printLinkedList(head);
//    return 0;
//}
