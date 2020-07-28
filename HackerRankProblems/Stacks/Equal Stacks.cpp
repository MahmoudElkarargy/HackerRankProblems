//
//  Equal Stacks.cpp
//  HackerRankProblems
//
//  Created by Mahmoud Elkarargy on 7/20/20.
//  Copyright © 2020 Mahmoud Elkarargy. All rights reserved.
//

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

/* Func. to get sum of every vector */
int getSum( vector<int> v){
    int sum = 0;
    for(int i=0; i<v.size(); i++){
        sum += v.at(i);
    }
    return sum;
}

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    int sumOfH1 = 0, sumOfH2=0, sumOfH3=0, min;
    /* save the sum of every vector*/
    sumOfH1 = getSum(h1);
    sumOfH2 = getSum(h2);
    sumOfH3 = getSum(h3);
    /* loop until reaching same hight*/
    while(true){
        /* Get the min value of arrays */
        if(sumOfH3< sumOfH2 && sumOfH3 < sumOfH1)
            min = sumOfH3;
        else if(sumOfH2< sumOfH1 && sumOfH2 < sumOfH1)
            min = sumOfH2;
        else
            min = sumOfH1;
        
        /* If h1 is bigger than the min, then loop till it's equal to min */
        while(sumOfH1 > min){
            sumOfH1 -= h1.at(0);
            h1.erase(h1.begin());
        }
        /* If h2 is bigger than the min, then loop till it's equal to min */
        while(sumOfH2 > min){
            sumOfH2 -= h2.at(0);
            h2.erase(h2.begin());
        }
        /* If h3 is bigger than the min, then loop till it's equal to min */
        while(sumOfH3 >min){
            sumOfH3 -= h3.at(0);
            h3.erase(h3.begin());
        }
        /* If the three are equal return. */
        if( sumOfH1 == sumOfH2 && sumOfH2 == sumOfH3)
            return sumOfH1;
    }
    return 0;
}



/* Smarter Algorithm */
/* How about this logic:
Step I. get the 3 array and reverse them, create a new array out of an existing array with each element is sum of all the previous elements. eg: [3,2,1,1,1] -> [1,1,1,2,3] -> [1,2,3,5,8]
So the 3 new array formed would be [1,2,3,5,8] [2,5,9] [1,5,6,7]
Step II. Again reverse the array [8,5,3,2,1] [9,5,2] [7,6,5,1]
Step III. Take the smallest array i.e. [9,5,2] traverse the smallest array and search element in the other 2 array - if the element is existing in other 2 array, STOP there and return the number.
Eg. Here I start with elem - 9 : Which is not existing in other 2 array. Next I start with elem - 5 : it is existing in other 2 array.
Wolla! 5 is my NUMBER!
*/
