# Set详解

##1.基础  
###1.1基本概念      
所有元素都会在插入时自动被排序     

本质: set/multiset属于关联式容器，底层结构是用二叉树实现。    
set和multiset区别: 1.set不允许容器中有重复的元素   2.multiset允许容器中有重复的元素。  

###1.2set构造和赋值  
创建set容器以及赋值     

构造： 
`set<T> st;` //默认构造函数   
`set(const set &st);` //拷贝构造函数  
赋值： 
`set& operator=(const set &st);`//重载等号操作符

###1.3大小和交换 
set容器大小以及交换set容器    
 
`size();` //返回容器中元素的数目   
`empty();` //判断容器是否为空   
`swap(st);` //交换两个集合容器
###1.4插入和删除     
set容器进行插入数据和删除数据        

`insert(elem);` //在容器中插入元素  
`clear();` //清除所有元素 
`erase(pos);` //删除pos迭代器所指的元素，返回下一个元素的迭代器   
`erase(beg, end);` //删除区间[beg,end]的所有元素，返回下一个元素的迭代器     
`erase(elem);` //删除容器中值为elem的元素 
###1.5查找和统计     
对set容器进行查找数据以及统计数据      

`find(key);` //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
`count(key);` //统计key的元素个数      


###1.6set和multiset区别
区别： 
1.set不可以插入重复数据，而multiset可以      
2.set插入数据的同时会返回插入结果，表示插入是否成功        
3.multiset不会检测数据，因此可以插入重复数据     

###1.7pari使用-pair对组的创建      

成对出现的数据，利用对组可以返回两个数据    

创建方式:   
`pair<type, type> p (value1, value2);`
`pair<type, type> p = make_pair(value1, value2);`
###1.8set容器-内置类型指定排序规则  
set容器默认排序规则从小到大，掌握如何改变排序规则      

主要技术点：  
利用仿函数，可以改变排序规则      
###1.9set容器-自定义数据类型指定排序规则