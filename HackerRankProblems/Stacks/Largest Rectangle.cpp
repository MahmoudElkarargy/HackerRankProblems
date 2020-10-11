//
//  Largest Rectangle.cpp
//  HackerRankProblems
//
//  Created by Mahmoud Elkarargy on 8/15/20.
//  Copyright © 2020 Mahmoud Elkarargy. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stack>

using namespace std;
//long answer=0;
//int tempHeight, tempPosition, pos;
//stack<int> postionStack;
//stack<int> heightStack;
//
//void popStack(){
//    tempHeight = heightStack.top();
//    tempPosition = postionStack.top();
//    heightStack.pop();
//    postionStack.pop();
//    if(answer < (tempHeight*(pos - tempPosition)) )
//        answer = tempHeight*(pos - tempPosition);
//}
//long largestRectangle(vector<int> h) {
//    for(pos=0; pos<h.size(); pos++){
//        if(heightStack.empty() || h.at(pos) > heightStack.top()){
//            heightStack.push(h.at(pos));
//            postionStack.push(pos);
//        }
//        else if(h.at(pos) < heightStack.top()){
//            while(!heightStack.empty() && h.at(pos) < heightStack.top())
//                popStack();
//            if(heightStack.empty()){
//                heightStack.push(h.at(pos));
//                postionStack.push(tempPosition);
//            }
//        }
//    }
//    while(!heightStack.empty())
//        popStack();
//    return answer;
//}
long largestRectangle(vector<int> h) {

    stack<int> s;
    int max_area = 0; // Initialize max area
    int tp;  // To store top of stack
    int area_with_top; // To store area with top bar
                       // as the smallest bar
  
    // Run through all bars of given histogram
    int i = 0;
    while (i < h.size())
    {
        // If this bar is higher than the bar on top
        // stack, push it to stack
        if (s.empty() || h[s.top()] <= h[i])
            s.push(i++);
  
        // If this bar is lower than top of stack,
        // then calculate area of rectangle with stack
        // top as the smallest (or minimum height) bar.
        // 'i' is 'right index' for the top and element
        // before top in stack is 'left index'
        else
        {
            tp = s.top();  // store the top index
            s.pop();  // pop the top
  
            // Calculate the area with hist[tp] stack
            // as smallest bar
            area_with_top = h[tp] * (s.empty() ? i :
                                   i - s.top() - 1);
  
            // update max area, if needed
            if (max_area < area_with_top)
                max_area = area_with_top;
        }
    }
  
    // Now pop the remaining bars from stack and calculate
    // area with every popped bar as the smallest bar
    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        area_with_top = h[tp] * (s.empty() ? i :
                                i - s.top() - 1);
  
        if (max_area < area_with_top)
            max_area = area_with_top;
    }
  
    return max_area;
}
