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
    int sumOfRemoved=0, numberOfIntegers=0;
    while(!a.empty() || !b.empty()){
        if(a.empty()){
            while(!b.empty()){
                if(sumOfRemoved+b.at(0) <= x){
                    sumOfRemoved += b.at(0);
                    b.erase(b.begin());
                    numberOfIntegers +=1;
                }
                else return numberOfIntegers;
            }
            return numberOfIntegers;
        }
        if(b.empty()){
            while(!a.empty()){
                if(sumOfRemoved+a.at(0) <= x){
                    sumOfRemoved += a.at(0);
                    a.erase(a.begin());
                    numberOfIntegers +=1;
                }
                else return numberOfIntegers;
            }
            return numberOfIntegers;
        }

        if(sumOfRemoved+b.at(0) > x && sumOfRemoved+a.at(0) > x)
            return numberOfIntegers;
        else{
            if(a.at(0) > b.at(0)){
                if(sumOfRemoved+a.at(0) <= x){
                    sumOfRemoved += a.at(0);
                    numberOfIntegers +=1;
                    a.erase(a.begin());
                }else if(sumOfRemoved+b.at(0) <= x){
                    sumOfRemoved += b.at(0);
                    b.erase(b.begin());
                    numberOfIntegers +=1;
                }
            }
            else{
                if(sumOfRemoved+b.at(0) <= x){
                    sumOfRemoved += b.at(0);
                    b.erase(b.begin());
                    numberOfIntegers +=1;
                }else if(sumOfRemoved+a.at(0) <= x){
                    sumOfRemoved += a.at(0);
                    a.erase(a.begin());
                    numberOfIntegers +=1;
                }
            }
        }
    }
    return numberOfIntegers;
}


