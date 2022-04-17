//
// Created by Cao Jian on 2022/4/7.
//

#include "BinarySearchC.h"


int BinarySearchC::binarySearch(vector<int> array, int count, int targetValue) {
    //非递归写法---;
    int low = 0;
    int height = count;

    while (low <= height) { //注意此处循环退出条件 <= 不是 <
//        int mid = (low + height) / 2;  这种写法有问题，假如low和height的值偏大的话可能会溢出
        int mid = low + (height - low) / 2;
        if(array[mid] == targetValue) {
            return mid;
        }else if(array[mid] > targetValue) {
            height = mid - 1;
        }else if(array[mid] < targetValue) {
            low = mid + 1;
        }
    }
    return 0;
}

int BinarySearchC::binarySearch2(vector<int> array, int low, int height, int targetValue) {
    //递归的写法
    if(low > height) {
        cout << "mid11:" << endl;
        return -1;
    }
//    int mid = (low + height) / 2; 错误写法
    int mid = low + ((height - low) >> 1); //比 《int mid = low + (height - low) / 2;》 更优 位运算效率高
    if(array[mid] == targetValue) {
        return (int)mid;
    }else if(array[mid] > targetValue) {
        return binarySearch2(array, low, mid - 1, targetValue);
    }else if(array[mid] < targetValue) {
        return binarySearch2(array, mid + 1, height, targetValue);
    }
}

//变体1:查找第一个值等于给定值的元素
int BinarySearchC::binarySearchChange1(vector<int> array, int count, int targetValue) {
    int low = 0;
    int height = count - 1;
    while (low <= height) {
        int mid = low + ((height - low) >> 1);
        if(array[mid] > targetValue) {
            low = mid + 1;
        }else if(array[mid] < targetValue) {
            height = mid - 1;
        } else {
            if(mid == 0 || array[mid - 1] != targetValue) {
                return mid;
            }else {
                height = mid - 1;
            }
        }
    }
    return -1;
}

//变体2:查找最后一个值等于给定值的元素
int BinarySearchC::binarySearchChange2(vector<int> array, int count, int targetValue) {
    int low = 0;
    int height = count - 1;
    while (low <= height) {
        int mid = low + ((height - low) >> 1);
        if(array[mid] > targetValue) {
            low = mid + 1;
        }else if(array[mid] < targetValue) {
            height = mid - 1;
        } else {
            if(mid == count - 1 || array[mid + 1] != targetValue) {
                return mid;
            }else {
                low = mid + 1;
            }
        }
    }
    return -1;
}

//变体3:查找第一个大于等于给定值的元素
int BinarySearchC::binarySearchChange3(vector<int> array, int count, int targetValue) {
    int low = 0;
    int height = 1;
    while (low <= height) {
        int mid = low + ((height - low) >> 1);
        if(array[mid] >= targetValue) {
            if(mid == 0 || array[mid - 1] < targetValue) {
                return mid;
            }
            height = mid - 1;
        }else {
            low = mid + 1;
        }
    }
    return -1;
}

//变体4:查找最后一个小于等于给定值的元素
int BinarySearchC::binarySearchChange4(vector<int> array, int count, int targetValue) {
    int low = 0;
    int height = 1;
    while (low <= height) {
        int mid = low + ((height - low) >> 1);
        if(array[mid] > targetValue) {
            height = mid - 1;
        }else {
            if((mid == count - 1) || array[mid - 1] < targetValue) {
                return mid;
            }
            low = mid + 1;
        }
    }
    return -1;
}
void BinarySearchC::binarySearchPrint(vector<int> array, int count, int targetValue) {
    cout << "-----------------------二分查找结果" << endl;
    cout << "非递归：" << binarySearch(array, count, targetValue) << "  递归：" << binarySearch2(array, 0, count, targetValue) << endl;


    //二分查找
//    vector<int> list1 = {1,3,5,6,7,7,10,30,56,99};
//    binarySearchPrint(list1, list1.size(),10);
}