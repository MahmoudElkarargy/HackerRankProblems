//
//  Balanced brackets.cpp
//  HackerRankProblems
//
//  Created by Mahmoud Elkarargy on 7/20/20.
//  Copyright © 2020 Mahmoud Elkarargy. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    int i=0;
    char c;
    stack<char> stack;
    while(i < s.length()){
        c = s.at(i);
        switch (c) {
            /* Add to stack*/
            case '[':
            case '(':
            case '{':
                stack.push(c);
                break;
            /* Switch for each closed bracket, Where we check that the top elments equals to it's closer bracket*/
            case ']':
                if (stack.empty() || (stack.top() != '['))
                    return "NO";
                stack.pop();
                break;
            case ')':
                if (stack.empty() || (stack.top() != '('))
                    return "NO";
                stack.pop();
                break;
            case '}':
                if (stack.empty() || (stack.top() != '{'))
                    return "NO";
                stack.pop();
                break;
        }
        i++;
    }
    /* If stack is empty then return yes*/
    return stack.empty()? "YES":"NO";
}
