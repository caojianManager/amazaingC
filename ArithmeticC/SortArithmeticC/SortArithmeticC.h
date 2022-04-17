//
// Created by Cao Jian on 2022/3/28.
//
#include <iostream>
#include <vector>
using namespace std;

#ifndef AMAZAINGC_SORTARITHMETICC_H
#define AMAZAINGC_SORTARITHMETICC_H

class SortArithmeticC {
private:
    void showBubbleSortResult(vector<int>& array);

public:
    vector<int> bubbleSort(vector<int> &array);

    void sortArithmeticCPrint();

};


#endif //AMAZAINGC_SORTARITHMETICC_H
