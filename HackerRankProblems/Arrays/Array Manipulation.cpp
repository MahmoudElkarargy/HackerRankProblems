////
////  Array Manipulation.cpp
////  HackerRankProblems
////
////  Created by Mahmoud Elkarargy on 6/12/20.
////  Copyright © 2020 Mahmoud Elkarargy. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    long int sum, max=0, summation=0;
//    int n, queriesSize, begining, ending;
//    //Get the n and number of queries.
//    cin >> n >> queriesSize;
//    //init vector array of length n+1.
//    vector<long int> results(n+1);
//    //Looping throw all the queries entery.
//    for(int i=0; i<queriesSize; i++){
//        //Save the beigining and end index and sum.
//        cin >> begining >> ending >> sum;
//        //Save only the beginning of the index value.
//        results[begining] += sum;
//        if(ending+1 <= n)
//            //Save after the end index the neagtive value, so you keeo track of the ending of it.
//            results[ending+1] -= sum;
//    }
//    for(int i=1; i<=n; i++){
//        summation += results[i];
//        if(summation>max)
//            max = summation;
//    }
//    cout << max << endl;
//    return 0;
//}
