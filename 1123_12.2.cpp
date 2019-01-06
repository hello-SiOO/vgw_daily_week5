//
//  main.cpp
//  1123_12.2_임수정
//
//  Created by 임수정 on 2018. 11. 23..
//  Copyright © 2018년 임수정. All rights reserved.
//

#include <iostream>
using namespace std;
template<typename T>
int linearSearch(T list[], T key, int size){
    for(int i = 0;i < size;i++){
        if(*(list+i) == key)
            return i;
    }
    return -1;
}
int main(){
    int list1[10] = {1,2,3,4,5,6,7,8,9,0};
    double list2[10] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.1};
    string list3[6] = {"sungshin","womens","university","computer","engineering","voidgetworld"};
    cout << "Enter a integer key: ";
    int intkey;
    cin >> intkey;
    
    cout << "Enter a double key: ";
    double doukey;
    cin >> doukey;
    
    cout << "Enter a string key: ";
    string strkey;
    cin >> strkey;
    
    if(linearSearch(list1, intkey, 10)>=0)
        cout << intkey << " in " << linearSearch(list1, intkey, 10)<<"index" << endl;
    else cout << "nohere" << endl;
    if(linearSearch(list2, doukey, 10)>=0)
        cout << doukey << " in " << linearSearch(list2, doukey, 10)<<"index" << endl;
    else cout << "nohere" << endl;
    if(linearSearch(list3, strkey, 4)>=0)
        cout << strkey << " in " << linearSearch(list3, strkey, 6)<<"index" << endl;
    else cout << "nohere" << endl;
    
    return 0;
}
