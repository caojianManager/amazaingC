//
// Created by Cao Jian on 2022/3/28.
//

#include "ArithmeticMainC.h"
#include "SortArithmeticC/SortArithmeticC.h"
#include "BinarySearchC/BinarySearchC.h"
#include "ArrayArithmeticC/ArrayArithmeticC.h"
#include "StringArithmeticC/StringArithmeticC.h"
#include <iostream>

using namespace std;

void ArithmeticMainC::arithmeticMainC() {

    //数组相关的算法
    ArrayArithmeticC arrayArithmeticC;
    arrayArithmeticC.arrayArithmeticCPrint();

    //String相关的算法
    StringArithmeticC stringArithmeticC;
    stringArithmeticC.stringArithmeticPrint();
}