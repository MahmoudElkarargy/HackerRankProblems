////
////  Maximum Element.cpp
////  HackerRankProblems
////
////  Created by Mahmoud Elkarargy on 7/17/20.
////  Copyright © 2020 Mahmoud Elkarargy. All rights reserved.
////
//
//#include <iostream>
//#include <stack>
//#define MAX 100000
//using namespace std;
//
//class Stack {
//public:
//    long int array[MAX]; // Maximum size of Stack
//    Stack() { top = -1; }
//    bool push(long int x);
//    long int pop();
//    bool isEmpty();
//    void printMax();
//    long int top;
//};
//
//bool Stack::push(long int x){
//    /* Stack Overflow */
//    if(top >= MAX-1){
//        return false;
//    }
//    /* Push to stack and incrment the top refrence. */
//    array[++top] = x;
//    return true;
//}
//
//long int Stack::pop(){
//    /* Stack is empty */
//    if(isEmpty()){
//        return 0;
//    }
//    /* Return top elment and decrment top refrence */
//    return array[top--];
//}
//
//bool Stack::isEmpty(){
//    return top<0;
//}
//
//void Stack::printMax(){
//    cout << array[top-1] << endl;
//}
//
//int main() {
//    Stack s;
//    long int numberOfQueries, number, currentMax=-1, elmentsAboveTop=0;
//    int operation;
//    /* Scan number of Queries */
//    cin >> numberOfQueries;
//    for(int i=0; i<numberOfQueries; i++){
//        /* get the operation 1/2/3 */
//        cin >> operation;
//        switch (operation) {
//            case 1:
//                /* Scan the number */
//                cin >> number;
//                /* if and only if the number is bigger than the last max of the stack then push it*/
//                if(number > currentMax){
//                    currentMax = number;
//                    s.push(number);
//                    /* Also push into the stack a counter which indicates the number of elments added after this
//                     max number to keep track, It starts with zero */
//                    elmentsAboveTop = 0;
//                    s.push(elmentsAboveTop);
//                }else{
//                    /* pop the last elment in the stack which is the counter, Incrment it then push it agian.*/
//                    s.pop();
//                    elmentsAboveTop += 1;
//                    s.push(elmentsAboveTop);
//                }
//                break;
//            case 2:
//                /* Get the number of elments above the max*/
//                elmentsAboveTop = s.pop();
//                /* If not zero, this means there's elments added but it's saved in the stack
//                 bec. they aren't max, Just decrment the number and push it agian */
//                if(elmentsAboveTop > 0){
//                    elmentsAboveTop -= 1;
//                    s.push(elmentsAboveTop);
//                } else{
//                    /* This mean it's the max number turn. */
//                    s.pop();
//                    /* if the stack isn't empty, This means there's more max nbs*/
//                    if(s.top > -1){
//                        /* Change the max nb and counter and push them back into stack */
//                        elmentsAboveTop = s.pop();
//                        currentMax = s.pop();
//                        s.push(currentMax);
//                        s.push(elmentsAboveTop);
//                    }
//                    /* If the stack become empty*/
//                    else
//                        currentMax = -1;
//                }
//                
//                break;
//            case 3:
//                s.printMax();
//                break;
//        }
//    }
//    return 0;
//}
