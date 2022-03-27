//
// Created by Cao Jian on 2022/3/26.
//

#include "ArrayBasicsC.h"
#include <iostream>

using namespace std;

void ArrayBasicsC::showArrayBasicsC() {
    showOneDimensional();
    showTwoDimensional();
}

void ArrayBasicsC::showOneDimensional() {
    cout << "-----------------------一维数组的声明" << endl;
    int arrayA[2];     //1.声明数组大小，不赋值
    //1.赋值
    arrayA[0] = 0;
    arrayA[1] = 1;
    //1.访问
    cout << "A-0:" << arrayA[0] << endl;
    cout << "A-1:" << arrayA[1] << endl;

    //2.声明数组，并赋值
    int arrayB[2] = {1,2};
    //2.访问
    for(int i = 0; i < 2; i++) {
        cout << "B-" << i << ":" << arrayB[i] << endl;
    }

    //2.当第2中赋值不全时会用默认值补充：eg:
    int arrayBB[5] = {1,2};
    for(int i = 0; i < 5; i++) {
        cout << "BB-" << i << ":" << arrayBB[i] << endl;
    }

    //3.声明数组，并赋值; 且此种赋值能自动推算出数组长度
    int arrayC[] = {1,2};
    for(int i = 0; i < 2; i++) {
        cout << "C-" << i << ":" << arrayC[i] << endl;
    }

    cout << "-----------------------一维数组名的运用" << endl;
    //获取数组所占据内存空间大小；
    int arrayAA[3] = {1,2,3};
    cout << "数组所占内存空间的大小:" << sizeof(arrayAA) << endl;
    //数组中每个元素所占内存大小；
    cout << "每个元素所占内存大小:" << sizeof(arrayAA[0]) << endl;
    //数组中元素的个数；
    cout << "数组中元素的个数:" << sizeof(arrayAA)/sizeof(arrayAA[0]) << endl;
    //查看数组首地址
    cout << "数组首地址为:" << arrayAA << endl;
    cout << "数组中第一个元素地址为:" << &arrayAA[0] << endl;
    //数组名为一个常量，因此不可以进行赋值； ❌arrayAA = 100;
}


void ArrayBasicsC::showTwoDimensional() {
    cout << "-----------------------二维数组声明" << endl;
    int arrayA[2][2]; //只声明，后面赋值
    arrayA[0][0] = 1;
    arrayA[0][1] = 2;
    arrayA[1][0] = 3;
    arrayA[1][1] = 4;
    cout << "A[0][0]:" << arrayA[0][0] << endl;
    cout << "A[0][1]:" << arrayA[0][1] << endl;
    cout << "A[1][0]:" << arrayA[1][0] << endl;
    cout << "A[1][1]:" << arrayA[1][1] << endl;

    int arrayB[2][2] = {{1,2},{3,4}}; //声明，并且赋值; 推荐这么写可读性比较高
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "B[" << i << "][" << j << "]:" << arrayB[i][j] << endl;
        }
    }

    int arrayC[2][2] = {1,2,3,4}; //声明，并赋值不用嵌套;会自动推断出数据属于哪行哪列
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "C[" << i << "][" << j << "]:" << arrayC[i][j] << endl;
        }
    }

    int arrayD[][2] = {1,2,3,4}; //声明，并赋值，但为明确行数，也能推断出有几行（因为有列数）
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "D[" << i << "][" << j << "]:" << arrayD[i][j] << endl;
        }
    }

    cout << "----------------------- 二维数组名称的作用" << endl;
    int arrayE[2][2] = {{1,2},{3,4}};
    cout << "二维数组内存大小:" << sizeof(arrayE) << endl;
    cout << "二维数组一行所占内存大小:" << sizeof(arrayE[0]) << endl;
    cout << "二维数组每一个元素所占据内存大小" << sizeof(arrayE[0][0]) << endl;

    cout << "二维数组的行数:" << sizeof(arrayE)/sizeof(arrayE[0]) << endl;
    cout << "二维数组的列数:" << sizeof(arrayE[0])/sizeof(arrayE[0][0]) << endl;

    cout << "二维数组首地址:" << arrayE << endl;
    cout << "二维数组第一行首地址" << arrayE[0] << endl;
    cout << "二维数组第二行首地址" << arrayE[1] << endl;

    cout << "二维数组第一个元素的首地址:" << &arrayE[0][0] << endl;
  }
