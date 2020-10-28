//
//  Simple Text Editor.cpp
//  HackerRankProblems
//
//  Created by Mahmoud Elkarargy on 10/11/20.
//  Copyright © 2020 Mahmoud Elkarargy. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    int numberOfOperations;
    cin >> numberOfOperations;
    
    int operation, index;
    string currentString, appendedString;
    stack<string> undo;
    
    for(int i=0; i<numberOfOperations; i++){
        cin >> operation;
        
        switch (operation){
            case 1:
                undo.push(currentString);
                cin >> appendedString;
                currentString += appendedString;
                break;
            case 2:
                undo.push(currentString);
                cin >> index;
                currentString = currentString.substr(0,currentString.length()-index);
                break;
            case 3:
                cin >> index;
                cout << currentString[index-1] << endl;
                break;
            case 4:
                currentString = undo.top();
                undo.pop();
                break;
        }
    }
    return 0;
}
