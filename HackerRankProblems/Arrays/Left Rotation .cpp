////
////  Dynamic Array.cpp
////  HackerRankProblems
////
////  Created by Mahmoud Elkarargy on 6/11/20.
////  Copyright © 2020 Mahmoud Elkarargy. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(){
//    int numbers, shiftNumber,increment;
//    cin >> numbers >> shiftNumber;
//    int array[numbers];
//    int getArray[numbers];
//    //Get the array elments.
//    for(int i=0; i<numbers; i++)
//        cin >> getArray[i];
//    //If shift is bigger than the actual size, then remove from it the length of the array.
//    if(shiftNumber >= numbers)
//        //Multiply the number of the length accourding to the size.
//        shiftNumber = shiftNumber - numbers*(shiftNumber/numbers);
//    
//    for (int i=0; i<numbers; i++){
//        //increment the array index.
//        increment = i + shiftNumber;
//        if(increment >= numbers){
//            array[i] = getArray[increment - numbers];
//        }else{
//            array[i] = getArray[increment];
//        }
//    }
//    //print the array value.
//    for (int i=0; i<numbers; i++)
//        cout << array[i] << " ";
//}
