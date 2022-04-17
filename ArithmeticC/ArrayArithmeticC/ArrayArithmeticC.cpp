//
// Created by Cao Jian on 2022/4/8.
//
#include <map>
#include <unordered_set>
#include "ArrayArithmeticC.h"

//LeetCode #1.两数之和  (Hash实现方法)
vector<int> ArrayArithmeticC::twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> dict;
    for (int i = 0; i < nums.size(); ++i) {
        /**
         * auto的两种使用情况:1.声明变量时根据初始化表达式自动推断变量的类型；2.声明函数时函数返回值的占位符
         */
        auto deviation = dict.find(target - nums[i]);
        if (deviation != dict.end()) {
            return {deviation->second, i};
        }
        dict[nums[i]] = i;
    }
    return {};
}

//LeetCode #1.两数之和  (两遍循环)
vector<int> ArrayArithmeticC::twoSum2(vector<int> &nums, int target) {
    for (int i = 0; i < nums.size(); ++i) {
        int tempDeviation = target - nums[i];
        for (int j = i + 1; j < nums.size(); ++j) {
            if(tempDeviation == nums[j]) {
                return {i, j};
            }
        }
    }
    return {};
}

/**
 *
 *一种错误的写法；假如nums中的值有负值，就会有问题
 *  int list[256] = {}; //默认值为0 int list[256]；会有问题
 *   for(vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
 *      list[*it]++;
 *      if(list[*it] >= 2) {
 *           return true;
 *       }
 *   };
 *   return false;
 */

//LeetCode #217.存在重复元素
bool ArrayArithmeticC::containsDuplicate(vector<int> &nums) {
        unordered_set<int> set1;
        for(int item:nums) {
            if(set1.find(item) != set1.end()) {
                return true;
            }
            set1.insert(item);
        }
    return false;
}

//Main
void ArrayArithmeticC::arrayArithmeticCPrint() {
    cout << "-----------------------#217.存在重复数字" << endl;
    vector<int> list1 = {1,5,-2,-4,0};
    cout << "是否存在:" << containsDuplicate(list1);
}