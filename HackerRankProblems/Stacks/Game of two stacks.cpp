//
//  Game of two stacks.cpp
//  HackerRankProblems
//
//  Created by Mahmoud Elkarargy on 7/28/20.
//  Copyright © 2020 Mahmoud Elkarargy. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;


int twoStacks(int x, vector<int> a, vector<int> b) {
    int sumOfRemoved=0, numberOfIntegers=0, i=0, j=0;
    /* considering First stack only, calculate sum and count numbers untill reaching max sum. */
    while(i < a.size() && sumOfRemoved+a.at(i) <= x){
        sumOfRemoved += a.at(i);
        i++;
    }
    /* The number of removed numbers will be equal to the i, which is the number of the first stack, this will work if the second stack contains bigger numbers. */
    numberOfIntegers = i;
    /* Now adding one elment from the second stack at a time */
    while(j<b.size() && i>= 0){
        sumOfRemoved += b.at(j);
        j++;
        /* If the sum become more than the max (x) then subtracting the top element of first stack */
        while(sumOfRemoved > x && i>0){
            i--;
            sumOfRemoved -= a.at(i);
        }
        /* If we reached a better number than change it. */
        if(sumOfRemoved <= x && i+j > numberOfIntegers)
            numberOfIntegers = i+j;
    }
    return numberOfIntegers;
}

