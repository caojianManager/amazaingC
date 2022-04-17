//
// Created by Cao Jian on 2022/4/10.
//

#include "MapBasicsC.h"


//Map的一些基本操作
void MapBasicsC::mapBasicsCInit() {
    map<int, int> map1; //默认构造
    map1.insert(pair<int, int>(1,2));
    map1.insert(pair<int, int>(2,4));
    map1.insert(pair<int, int>(4,8));
    map1.insert(pair<int, int>(8,10));
    cout << "----------------------- 默认构造" << endl;
    printMap(map1);
    map<int, int> map2(map1); //拷贝构造
    cout << "----------------------- 拷贝构造" << endl;
    printMap(map2);

}


void MapBasicsC::printMap(map<int, int> &dict) {
    for(map<int, int>::iterator it = dict.begin(); it != dict.end(); it++) {
        cout << "key:" << it->first << "value:" << it->second << endl;
    }
    cout << endl;
}



//Main
void MapBasicsC::mapBasicsCPrint() {
    //map的基本操作
    mapBasicsCInit();
}