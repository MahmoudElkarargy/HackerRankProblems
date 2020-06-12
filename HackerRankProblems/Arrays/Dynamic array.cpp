//
//  Dynamic array.cpp
//  HackerRankProblems
//
//  Created by Mahmoud Elkarargy on 6/12/20.
//  Copyright © 2020 Mahmoud Elkarargy. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    int numberOfSeuance, numberOfQueries, i, querieType, xIndex, lastAnswer=0, elmentToBeStored, index;
    //Get the number of sequance and number of Queries.
    cin >> numberOfSeuance >> numberOfQueries;
    //create array of vectors for queires.
    vector <vector <int> > resultsArray(numberOfSeuance,vector <int> ());
    //loop and take all the queries elments.
    for(i=0; i<numberOfQueries; i++){
        //Get the 3 inputs. (1/2) x y
        cin >> querieType >> xIndex >> elmentToBeStored;
        // set the indeex from the rule.
        index = (xIndex^lastAnswer)%numberOfSeuance;
        //check for querieType.
        if (querieType == 1){
            //Add the elment in it's right sequance.
            resultsArray[index].push_back(elmentToBeStored);
        }else{
            //update and print the lastAnswer.
            lastAnswer = resultsArray[index][elmentToBeStored%resultsArray[index].size()];
            cout << lastAnswer << endl;
        }
    }
    return 0;
}
