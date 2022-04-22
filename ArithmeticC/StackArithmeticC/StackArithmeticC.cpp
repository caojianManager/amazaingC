//
// Created by Cao Jian on 2022/4/18.
//
#include <unordered_map>
#include "StackArithmeticC.h"

bool StackArithmeticC::isValid(string s) {

    unordered_map<char, char> pairs = {{'{','}'},{'(',')'},{'[',']'}};
    stack<char> stackList;
    for(char ch: s) {
        if(pairs.count(ch)) {
            if(stackList.empty() || stackList.top() != pairs[ch]) {
                return false;
            }
            stackList.pop();
        }else {
            stackList.push(ch);
        }
    }
    return stackList.empty()

}

//main
void StackArithmeticC::stackArithmeticCPrint() {

}