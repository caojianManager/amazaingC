# map / mutimap 容器详解

#### map的基本概念
1.map中所有的元素都pair;
2.pair中第一个元素为key(键-索引作用),value(值);
3.所有元素会根据key-value自动排序;

#### map的本质
> map/multimap属于关联式容器，底层结构用二叉树实现。

#### map的优点
1.可以根据key快读找到value

#### map/multimap的区别
1.map不允许容器中有重复key值元素
2.multimap允许容器中有重复的key值元素

## 二. map的构造和赋值
+ 构造:   
`map<T1,T2> map;` //map默认构造函数
`map(const map &map);` //拷贝构造函数
+ 赋值
`map& opreator=(const map &map);` //重载等号操作符
 