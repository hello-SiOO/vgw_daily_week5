//
//  main.cpp
//  1127_12.16_임수정
//
//  Created by 임수정 on 2018. 11. 27..
//  Copyright © 2018년 임수정. All rights reserved.
//

#include <iostream>
#include <stack>
#include<string>
using namespace std;

int main(){
    stack<int> S;
    
    cout << "Enter a mathematical expression: ";
    string s;
    getline(cin,s);
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] <= '9' || s[i] >= '0'){
            S.push(s[i]-'0');
        }
        else if(s[i] == 0)
            S.push(s[i]);
        //연산자
        else{
            int result = 0;
            int n1 = 0;
            while(S.top() != 0){
                n1 = n1 * 10 + S.top();
                S.pop();
            }
            int n2 = 0;
            while(S.top() != 0 || !S.empty()){
                n2 = n2 * 10 + S.top();
                S.pop();
            }
            if(s[i] == '+')
                result = (n1)+(n2);
            else if(s[i] == '-')
                result = (n1)-(n2);
            else if(s[i] == '*')
                result = (n1)*(n2);
            else if(s[i] == '/')
                result = (n1)/(n2);
            do{
                if(result == 0){
                    S.push(0);
                    break;
                }
                else{
                    S.push(result%10);
                    result = result / 10;
                }
            }while(result != 0);
        }
    }
    cout << "the result is " << S.top() << endl;
    return 0;
}
