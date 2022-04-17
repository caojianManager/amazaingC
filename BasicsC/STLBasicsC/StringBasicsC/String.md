# string 详解     


## 1.基本概念
string是C++风格的字符串，本质上string是一个类

###1.1stirng 和 char* 的区别     
+ char* 是一个指针
+ string是一个类，类内部封装类char*,管理这个字符串，是一个char*型的容器。

###1.2 特点：  
+ stirng类内部封装了很多成员方法(eg: find, copy, delete, replace, insert)
+ string管理char*所分配的内存, 不用担心复制越界等，由类内部进行负责。

##2. string构造函数 
`string();   //创建一个空字符串`    
`string(consst char* s); //使用字符串s初始化`   
`stirng(const string& str); //使用一个string对象初始化另外一个string对象`      
`string(int n, char c); //使用n个字符串c初始化`  

##3.string赋值    
`string& operator=(const char* s);` //char*类型字符串赋值给当前的字符串   
`string& operator=(const string &s);`   //把字符串s赋给当前的字符串     
`string& operator=(char c);`    //字符赋值给当前字符串        
`string& assing(const char *s);`    //把字符串s赋给当前字符串      
`string& assing(const char *s, int n);` //把当前字符串s的前n个字符赋给当前字符串   
`string& assing(const string &s);`      //把字符串s赋给当前字符串
`string& assing(int n, char c);` //用n个字符c赋给当前字符串   
##4.string字符串拼接
`string& operator+=(const char* str);` //重载+=操作符
`string& operator+=(const char c);`    //重载+=操作符
`string& operator+=(const string& str);` //重载+=操作符
`string& append(const char *s);` //把字符串s连接到当前字符串结尾
`string& append(const char *s, int n);` //把字符串s的前n个字符串连接到当前字符串结尾
`string& append(const string &s);`  //同operator+=(const string& str)
`string& append(const string &s, int pos, int n);`  //字符串s中从pos开始的n个字符连接到字符串结尾
##5.string字符串查找和替换
> 查找：查找指定字符串是否存在    
> 替换：在指定的位置替换字符串

`int find(const string& str, int pos = 0) const;` //查找str第一次出现的位置，从pos开始查找     
`int find(const char* s, int pos = 0) const;`  //查找s第一次出现位置，从pos开始查找       
`int find(const char* s, int pos, int n) const;`  //从pos位置查找s的前n个字符第一次位置      
`int find(const char c, int pos = 0) const;`  //查找字符c第一次出现位置      
`int rfind(const string& str, int pos = npos) const;` //查找str最后一次位置,从pos开始查找      
`int rfind(const char* s, int pos = npos) const;` //查找s最后一次出现位置，从pos开始查找      
`int rfind(const char* s, int pos, int n) const;` //从pos查找s的前n个字符最后一次出现位置     
`int rfind(const char c, int pos = 0) const;` //查找字符c最后一次出现位置     
`string& replace(int pos, int n , const string& str);`//替换从pos开始n个字符为字符串str       
`string& replace(int pos, int n, const char* s);` //替换从pos开始的n个字符为字符串s        
##6.string字符串比较
> 字符串之间的比较是按照字符的ASCII码进行对比 （= 返回 0，>返回 1，< 返回 -1）   

`int compare(const string &s) const;` //与字符串s比较     
`int compare(const char *s) const;` //与字符串s比较
##7.string字符串存取
> string中单个字符存取方式有两种        

`char& operator[](int n);` //通过[]方式取字符  
`char& at(int n);` //通过at方法获取字符
##8.string字符串插入和删除
> string字符串进行插入和删除操作

`string& insert(int pos, const char* s);`   //插入字符串     
`string& insert(int pos, const string& str);`   插入字符串   
`string& insert(int pos, int n, char c);`      //在指定位置插入n个字符c   
`string& erase(int pos, int n = npos);`     //删除从Pos开始的n个字符 
##9.string--子串的获取
> 从字符串中获取想要的子串  

`string substr(int pos = 0, int n = npos) const;` //返回由pos开始的n个字符组成的字符串
