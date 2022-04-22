# map / mutimap 容器详解

##1.基础

###1.1基本概念
1.map中所有的元素都pair;
2.pair中第一个元素为key(键-索引作用),value(值);
3.所有元素会根据key-value自动排序;

###1.2 map的本质
> map/multimap属于关联式容器，底层结构用二叉树实现。

###1.3优点
1.可以根据key快读找到value

###1.4 map/multimap的区别
1.map不允许容器中有重复key值元素
2.multimap允许容器中有重复的key值元素

###1.5. map的构造和赋值
+ 构造:   
`map<T1,T2> map;` //map默认构造函数  
`map(const map &map);` //拷贝构造函数
+ 赋值  
`map& opreator=(const map &map);` //重载等号操作符
 
###1.6 大小和交换        
统计map容器大小以及交换map容器  
`size();` //返回容器中元素的数目
`empty();` //判断容器是否为空
`swap(st);` //交换两个集合容器
###1.7 插入和删除    
map容器进行插入数据和删除数据    
`insert(elem);`//在容器中插入元素   
`clear();` //清除所有元素
`erase(pos);` //删除pos迭代器所指的元素，返回下一个元素的迭代器   
`erase(beg, end);`//删除区间[beg, end] 的所有元素，返回下一个元素的迭代器    
`erase(key);` //删除容器中值为key的元素
###1.8 查找和统计
map容器进行查找数据以及统计数据       
`find(key);`//查找key是否存在，若存在，返回该键的元素的迭代器；若不存在，返回set.end()    
`count(key);`//统计key的元素的个数
###1.9 排序   
map容器默认排序规则为按照key值进行从小到大排序，掌握如何改变排序规则   

主要技术点：利用仿函数，可以改变排序规则