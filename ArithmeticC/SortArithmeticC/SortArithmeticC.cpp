//
// Created by Cao Jian on 2022/3/28.
//

#include "SortArithmeticC.h"

vector<int> SortArithmeticC::bubbleSort(vector<int>& array) {
    bool flag;
    for (int i = 0; i < array.size(); ++i) {
        flag = false;
        for (int j = 0; j < array.size()-i-1; ++j) { //array.size() -i -1 ；（-1）保证有交换值
            if(array[j] > array[j+1]) {
                int tempIntValue = array[j];
                array[j] = array[j+1];
                array[j+1] = tempIntValue;
                flag = true;
            }
        }
        if(!flag) {//flag为false证明这一轮没有进行交换 -- 则排序完成；
            break;
        }
    }
    showBubbleSortResult(array);
    return array;
}

void SortArithmeticC::showBubbleSortResult(vector<int>& array) {
    cout << "-----------------------冒泡排序的结果" << endl;
    for (int i = 0; i < array.size(); ++i) {
        cout << array[i] << ",";
    }
    cout << endl;
}

void SortArithmeticC::sortArithmeticCPrint() {
    //冒泡排序
    vector<int> list = {1,3,5,11,21,2,4,34};
    bubbleSort(list);

}