# Vector 容器详解

##1.基础
###1.1基本概念
功能：vector数据结构和数组非常相似,也称为单端数组    
vector与普通数组区别: 不同之处在于数组是静态空间, 而vector可以动态扩展     
动态扩展: 并不是在原来空间之后续接新空间, 而是找更大的内存空间，然后将原数据拷贝到新空间, 释放原空间   

###1.2构造函数  
创建vector容器  

`vector<T> v;`//采用模版实现类实现，默认构造函数    
`vector(v.begin(),v.end());` //将v[begin(),end()]区间中的元素拷贝给本身     
`vector(n,elem);`//构造函数将n个elem拷贝给本身 
`vector(const vector &vec);`//拷贝构造函数        

###1.3赋值
vector容器进行赋值    
`vector& operator=(const vector &vec);`//重载等号操作符     
`assign(beg,end);`//将[beg,end]区间中的数据拷贝赋值给本身     
`assign(n,elem);` //将n个elem拷贝赋值给本身  
###1.4容量和大小
vector容器的容量和大小
`empty();`//判断容器是否为空    
`capacity();`//容器容量     
`size();`//返回容器中元素的个数   
`resize(int num);`//重新指定容器的长度为num，若容器变长，则以默认值填充新位置  
                    //如果容器变短，则末尾超出容器长度的元素被删除。   
`resize(int num, elem);`//重新指定容器长度为num，若容器变长，则以elem值填充新位置。          
                     //如果容器变短，则末尾超出容器长度的元素被删除。
###1.5插入和删除
对vector容器进行插入,删除
`push_back(ele);` //尾部插入元素ele   
`pop_back(ele);` //删除最后一个元素     
`insert(const_iterator pos,ele);` //迭代器指向位置pos插入count个元素ele         
`insert(const_iterator pos, int count, ele);` //迭代器指向位置pos插入count个元素ele     
`erase(const_iterator pos);` //删除迭代器指向的元素       
`erase(const_iterator start,const_iterator end);` //删除迭代器从start到end之间的元素    
`clear();` //删除容器中所有元素。

###1.6数据存取
对vector中的数据的存取操作    
`at(int idx);`  //返回索引idx所指的数据      
`operator[];`   //返回索引idx所指的数据      
`front();`      //返回容器中第一个数据元素        
`back();`       //返回容器中最后一个数据元素     
###1.7互换容器
实现两个容器内元素进行互换       
`swap(vec);` //将vec与本身的元素互换
###1.8预留空间
减少vector在动态扩展容器时的扩展次数   
`reserve(int len);` //容器预留len个元素长度，预留位置不初始化，元素不可访问。