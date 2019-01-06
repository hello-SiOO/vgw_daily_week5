//
//  main.cpp
//  1123_12.6_임수정
//
//  Created by 임수정 on 2018. 11. 23..
//  Copyright © 2018년 임수정. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
template<typename T>
class Stack{
public:
    Stack(){
    }
    bool empty() const{
        return elements.empty();
    }
    T peek() const{
        return elements.back();
    }
    void push(T value){
        elements.push_back(value);
    }
    T pop(){
        return elements.pop_back();
    }
    int getSize() const{
        return elements.size();
    }
    void printStack(){
        for(int i = 0 ; i < elements.size() ; i++){
            cout << elements[i];
            if(i != elements.size()-1)
                cout << ", ";
        }
        cout << endl;
    }
private:
    vector<T> elements;
};
int main(){
    Stack<int> Stack1;
    int n;
    cout << "Enter elements of stack :";
    for(int i = 0 ; i < 5 ; i++){
        cin >> n;
        Stack1.push(n);
    }
    if(!Stack1.empty()){
        Stack1.printStack();
    }
    
    Stack<string> Stack2;
    string s;
    cout << "Enter elements of stack :";
    for(int i = 0 ; i < 5 ; i++){
        cin >> s;
        Stack2.push(s);
    }
    if(!Stack2.empty()){
        Stack2.printStack();
    }
    
    return 0;
}
