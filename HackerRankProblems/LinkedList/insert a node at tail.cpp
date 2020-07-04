//#include <iostream>
//
//using namespace std;
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
//class SinglyLinkedList {
//    public:
//        SinglyLinkedListNode *head;
//
//        SinglyLinkedList() {
//            this->head = nullptr;
//        }
//
//};
//
//void print_singly_linked_list(SinglyLinkedListNode* node) {
//    while (node) {
//        cout << node->data;
//
//        node = node->next;
//        cout << endl;
//    }
//}
//
//void free_singly_linked_list(SinglyLinkedListNode* node) {
//    while (node) {
//        SinglyLinkedListNode* temp = node;
//        node = node->next;
//
//        free(temp);
//    }
//}
//
//// Complete the insertNodeAtTail function below.
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
//SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
//
//    /* 1. allocate node */
//    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
//    
//    /* 2. put in the data  */
//    newNode->data = data;
//    /* 3. This new node is going to be the last node, so make next
//    of it as NULL*/
//    newNode->next = NULL;
//    /* 4. If the Linked List is empty, then make the new node as head */
//    if (head == NULL)
//    {
//       head = newNode;
//    }else{
//        /* Reference to head and incremented down to the tail */
//        SinglyLinkedListNode *last = head;
//        /* 5. Else traverse till the last node */
//        while(last->next != NULL)
//            last = last->next;
//         /* 6. Change the next of last node */
//        last->next = newNode;
//    }
//    return head;
//}
//
//int main()
//{
////    ofstream cout(getenv("OUTPUT_PATH"));
//
//    SinglyLinkedList* llist = new SinglyLinkedList();
//
//    int llist_count;
//    cin >> llist_count;
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');
//
//    for (int i = 0; i < llist_count; i++) {
//        int llist_item;
//        cin >> llist_item;
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//    
//          SinglyLinkedListNode* llist_head = insertNodeAtTail(llist->head, llist_item);
//        llist->head = llist_head;
//    }
//
//    print_singly_linked_list(llist->head);
//    cout << "\n";
//
//    free_singly_linked_list(llist->head);
//
////    fout.close();
//
//    return 0;
//}
