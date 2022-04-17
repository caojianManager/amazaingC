//
// Created by Cao Jian on 2022/4/8.
//

#include <iostream>
#include <vector>
#include <unordered_map>
#ifndef AMAZAINGC_ARRAYARITHMETICC_H
#define AMAZAINGC_ARRAYARITHMETICC_H
using namespace std;


class ArrayArithmeticC {

public:
    void arrayArithmeticCPrint();
private:
    //leetCode #1.两数之和
    vector<int> twoSum(vector<int>& nums, int target);
    vector<int> twoSum2(vector<int>& nums, int target);

    //leetCode #217.存在重复元素
    bool containsDuplicate(vector<int>& nums);

};


#endif //AMAZAINGC_ARRAYARITHMETICC_H
