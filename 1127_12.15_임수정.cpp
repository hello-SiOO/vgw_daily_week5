//
//  main.cpp
//  1127_12.15_임수정
//
//  Created by 임수정 on 2018. 11. 27..
//  Copyright © 2018년 임수정. All rights reserved.
//
#include <fstream>
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    
    //ifstream in("stack.h");
    string s;
    //if(in.is_open())
    cout<< ":";
    cin >> s;
    
    stack<char> S;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            S.push(s[i]);
        else if(( s[i] == ')' && S.top() == '(' )||( s[i] == '}' && S.top() == '{' )||( s[i] == ']' && S.top() == '[' ))
                S.pop();
    }
    if(!S.empty())
        cout << "invalid characters" << endl;
    else
        cout << "correct" << endl;
    
    
    
    return 0;
}
