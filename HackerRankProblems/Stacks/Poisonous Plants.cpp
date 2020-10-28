////
////  Poisonous Plants.cpp
////  HackerRankProblems
////
////  Created by Mahmoud Elkarargy on 10/11/20.
////  Copyright © 2020 Mahmoud Elkarargy. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
////int poisonousPlants(vector<int> p) {
////    int nbOfDays, count=0;
////    stack<int> s;
////    s.push(0);
////    cout << "Stack now: " << s.top() << endl;
////    for(int i=1; i< p.size(); i++){
////        cout << "Comparing: " << p[s.top()] << " With: " << p[i] << endl;
////        while(!s.empty() && p[i] >= p[s.top()]){
////
////            count ++;
////            cout << "Comparing: " << p[s.top()] << " With: " << p[i] << endl;
////            cout << "Counting now: " << count << endl;
////            s.pop();
////        }
////        if(s.empty()){
////            cout << "Spam is: " << i+1;
////        }
////        else {
////            cout << "Spam is: " << i-s.top();
////        }
////        count = 0;
////        s.push(i);
////        cout << "Stack now: " << s.top() << endl;
////    }
////    return 1;
////}
//
//
//Below code works perfectly
//int main()
//{
//int n;
//cin>>n;
//
//int* p = new int[n];
//for(int i=0;i<n;i++)
//    cin>>p[i];
//
//int* days = new int[n]();
//int min = p[0];
//int max = 0;
//stack<int> s;
//
//s.push(0);
//
//for(int i=1;i<n;i++)
//    {
//
//    if(p[i] > p[i-1])
//        days[i] = 1;
//
//    min = min < p[i]?min:p[i];
//
//    while(!s.empty() && p[s.top()] >= p[i])
//     {
//       if(p[i] > min)
//       days[i] = days[i] > days[s.top()] + 1?days[i]:days[s.top()] + 1;
//
//        s.pop();
//   }
//
//    max = max>days[i]?max:days[i];
//    s.push(i);
//}
//
//cout<<max<<endl;
//}
