//
//  main.cpp
//  1123_12.1_임수정
//
//  Created by 임수정 on 2018. 11. 23..
//  Copyright © 2018년 임수정. All rights reserved.
//

#include <iostream>
using namespace std;
template<typename T>
T maxValue(T list[], int size){
    T max = *list;
    for(int i = 1 ; i < size ; i++){
        if(*(list+i)>max)
            max = *(list+i);
    }
    return max;
}
int main(){
    int list1[10] = {1,10,4,13,2,5,3,6,7,8};
    double list2[10] = {1.1,10.1,4.1,13.1,2.1,5.1,3.1,6.1,7.1,8.5};
    string list3[3] = {"abc","abd","abb"};
    
    cout << "A max value of list1 is "<< maxValue(list1,10)<<endl;
    cout << "A max value of list2 is "<< maxValue(list2,10)<<endl;
    cout << "A max value of list3 is "<< maxValue(list3,3)<<endl;
    
    return 0;
}
