//
// Created by Cao Jian on 2022/4/7.
//
#include <iostream>
#include <vector>
#ifndef AMAZAINGC_BINARYSEARCHC_H
#define AMAZAINGC_BINARYSEARCHC_H

using namespace std;

class BinarySearchC {
public:
    void binarySearchPrint(vector<int> array, int count, int targetValue);

private:
    int binarySearch(vector<int> array, int count, int targetValue); //非递归写法
    int binarySearch2(vector<int> array, int low, int height, int targetValue); //递归写法

    int binarySearchChange1(vector<int> array, int count, int targetValue); //变体1: 查找第一个值等于给定值的元素
    int binarySearchChange2(vector<int> array, int count, int targetValue); //变体2: 查找最后一个值等于给定值的元素
    int binarySearchChange3(vector<int> array, int count, int targetValue); //变体3: 查找第一个大于等于给定值的元素
    int binarySearchChange4(vector<int> array, int count, int targetValue); //变体4: 查找最后一个小于等于给定值的元素

};


#endif //AMAZAINGC_BINARYSEARCHC_H
