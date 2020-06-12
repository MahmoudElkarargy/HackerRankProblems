////
////  Sparse Arrays  Sparse Arrays  Sparse Arrays  Sparse Arrays  Sparse Arrays.cpp
////  HackerRankProblems
////
////  Created by Mahmoud Elkarargy on 6/12/20.
////  Copyright © 2020 Mahmoud Elkarargy. All rights reserved.
////
//#include <iostream>
//#include <vector>
//using namespace std;
//
//// Complete the matchingStrings function below.
//vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
//    vector<int> result(queries.size());
//    for(int i=0; i<queries.size(); i++){
//        for(int j=0; j<strings.size(); j++){
//            //Check for matching strings.
//            if(queries.at(i) == strings.at(j))
//                result[i] += 1;
//        }
//    }
//    return result;
//}
//
//
//int main(){
//    int stringSize, queriesSize;
//    //Get the number of strings.
//    cin >> stringSize;
//    vector<string> strings(stringSize);
//    //Get the elments of strings.
//    for(int i=0; i<stringSize; i++)
//        cin >> strings[i];
//    //Get the number of queries.
//    cin >> queriesSize;
//    vector<string> queries(queriesSize);
//    //Get the elments of queries.
//    for(int i=0; i<queriesSize; i++)
//        cin >> queries[i];
//
//    vector<int> results = matchingStrings(strings, queries);
//
//    // print results.
//    for (int i=0; i<results.size(); i++) {
//        cout << results.at(i) << endl;
//    }
//
//    return 0;
//}
