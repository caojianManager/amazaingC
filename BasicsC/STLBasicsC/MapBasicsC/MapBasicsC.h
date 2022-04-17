//
// Created by Cao Jian on 2022/4/10.
//

#include <map>
#include <iostream>
#ifndef AMAZAINGC_MAPBASICSC_H
#define AMAZAINGC_MAPBASICSC_H

using namespace std;
class MapBasicsC {
private:
    void mapBasicsCInit(); // Map的基本操作

    void printMap(map<int, int> &dict); // 打印字典
public:
    void mapBasicsCPrint();

};


#endif //AMAZAINGC_MAPBASICSC_H
