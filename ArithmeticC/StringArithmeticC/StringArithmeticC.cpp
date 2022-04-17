//
// Created by Cao Jian on 2022/4/16.
//

#include "StringArithmeticC.h"

//242.有效的字母异位词
bool StringArithmeticC::isAnagram(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(),t.end());
    if(s == t) {
        return true;
    }
    return false;
}

//main
void StringArithmeticC::stringArithmeticPrint() {

    cout << "-----------------------242.有效的字母异位词" << endl;
    cout << isAnagram("ansa", "saan") << endl;
}