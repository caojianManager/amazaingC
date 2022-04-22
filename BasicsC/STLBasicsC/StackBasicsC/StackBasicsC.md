# Stack 详解      

##1.基础      
###1.1基本概念      
stack是一种先进后出(first in last)的数据结构，它只有一个出口，栈中只有顶端的元素才可以被外外界使用，因此栈不允许有遍历行为。        

###1.2stack常用接口     
功能: 栈容器常用的对外接口      

创建：     
`stack<T> stk;` //stack采用模版类实现，stack对象的默认构造形式。  
`stack(const stack &stk);` //拷贝构造函数     

赋值:     
`stack& operator=(const stack &stk);` //重载等号操作符     
数据存取:       
`push(elem);` //向栈顶添加元素     
`pop();` //从栈顶移除第一个元素       
`top();` //返回栈顶元素       
大小操作:   
`empty();` //判断堆栈是否为空   
`size();` //返回栈的大小