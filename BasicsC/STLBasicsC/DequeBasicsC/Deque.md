# Deque详解

##1.基础

###1.1基本概念
功能：双端数组,可以对头端尽享插入/删除操作。
deque与vector的区别:    
+ vector对头部插入删除效率低，数据量越大，效率越低。
+ deque相对而言，对头部的插入删除速度回比vector快。
+ vector访问元素时的速度会比deque快，这和两者内部实现有关。

deque内部工作原理:
deque内部有个中控器，维护每段缓冲区中的内容，缓冲区中存放真实数据。    
中空器维护的是每个缓冲区的地址，使得使用deque时像一片连续的内存空间。   
deque容器的迭代器也是支持随机访问的    

###1.2deque构造函数 
deque容器创建   
`deque<T> deq;` //默认构造形式    
`deque(beg, end);` //构造函数将[beg, end]区间中的元素拷贝给本身。    
`deque(n , elem);` //构造函数将n个elem拷贝给本身   
`deque(const deque &deq);` //拷贝构造函数 
###1.3赋值
deque容器进行赋值     
`deque& operator=(const deque &deq);` //重载等号操作符     
`assign(beg, end);` //将[beg, end]区间中的数据拷贝赋值给本身  
`assign(n, elem);` //将n个elem拷贝赋值给本身
###1.4大小
deque容器的大小进行操作 
`deque.empty();` //判断容器是否为空     
`deque.size();` //返回容器中元素的个数        
`deque.resize(num);` //重新指定容器的长度为num，若容器变长, 则以默认值填充新位置  
//如果容器变短，则末尾超出容器长度的元素被删除。           
`deque.resize(num, elem);` //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。  
//如果容器变短，则末尾超出容器长度的元素被删除。
###1.5插入和删除     
deque容器中插入/删除数据

两端插入操作：     
`push_back(elem);` //在容器尾部添加一个数据        
`push_front(elem);` //在容器头部插入一个数据       
`pop_back(elem);`   //删除容器最后一个数据        
`pop_front(elem);` //删除容器第一个数据      
指定位置操作:     
`insert(pos, elem);` //在pos位置插入一个elem元素的拷贝，返回新数据位置。         
`insert(pos,n,elem);` //在pos位置插入n个elem数据，无返回值。              
`insert(pos, beg, end);` //在pos位置插入[beg,end]区间的数据，无返回值。         
`clear();` //清空容器的所有数据              
`erase(beg, end);` //删除[beg, end]区间的数据，返回下一个数据的位置。    
`erase(pos);` //删除pos位置的数据，返回下一个数据的位置。  
###1.6数据存取      
deque中的数据的存取操作  
`at(int idx);`  //返回索引idx所指的数据  
`operator[];`  //返回索引idx所指的数据       
`front();`      //返回容器中第一个数据元素      
`back();`       //返回容器中最后一个数据元素
###1.7排序操作
利用算法实现对deque容器进行排序  
`sort(iterator beg,iterator end);` //对beg和end区间内元素进行排序。     
