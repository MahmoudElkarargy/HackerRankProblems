//
//  2D Array - DS  2D Array - DS  2DArrayDS.cpp
//  HackerRank
//
//  Created by Mahmoud Elkarargy on 6/10/20.
//  Copyright © 2020 Mahmoud Elkarargy. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;


// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int j=0, sum =0;
    int max = -64; //Max negative nb can be reached.
    //Loop to last elemnt that's can be used, Which is before the array size (6) by 2.
    for(int i=0; i<=4; i++){
        //break if reached the end of rows.
        if(j==4)
            break;
        //start new line, Can be done using nested loops.
        if(i==4){
            i = -1;
            j++;
            continue;
        }
        //Calculate the sum.
        sum = arr[j][i] + arr[j][i+1] + arr[j][i+2]
                        + arr[j+1][i+1] +
              arr[j+2][i] + arr[j+2][i+1] + arr[j+2][i+2];
        //Saving max sum.
        if (sum > max)
            max = sum;
    }
    return max;
}

int main() {
    vector<vector<int>> g ={ {1, 1, 1, 0, 0, 0},
                             {0, 1, 0, 0, 0, 0},
                             {1, 1, 1, 0, 0, 0},
                             {0, 0, 2, 4, 4, 0},
                             {0, 0, 0, 2, 0, 0},
                             {0, 0, 1, 2, 4, 0} };
    hourglassSum(g);
    return 0;
}
