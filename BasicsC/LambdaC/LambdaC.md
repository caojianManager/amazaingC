# lambda表达式详解

在开始理解lambda表达式之前先了解以下概念:    
1.调用运算符"()": 该运算符为一对圆括号，里面防止实参；可通过该运算符调用函数。
2.可调用对象:一个对象或者一个表达式，对其可使用调用运算符，则称它为可调用的。（eg:函数/函数指针/重载了函数调用运算符的类）   
3.lambda表达式 ->是可调用对象

##1.lambda表达式的含义和声明     
一个lambda表达式表示一个可调用的代码块(未命名的内联函数)。   
`[capture list](parameter list) -> return type { function body }`   
参数的含义：  
+ capture list(捕获列表)：
+ parameter list(参数列表)：
+ return type (返回参数)：
+ function body(函数体)：

> -- lambda表达式中忽略参数列表等价与指定一个空参列表    
> -- lambda表达式中忽略返回参数类型，lambda根据函数体中的代码推断(如果lambda的函数体包含任何单一return语句之外的内容，且未来指定返回类型，则返回void)        

###1.1 向lambda传参
传递参数的时候，注意实参和形参数目必须保持一致。lambda的参数不能有默认参数。
###1.2 使用捕获列表   
一个lambda只有在其捕获列表中捕获一个它所在函数中的局部变量，才能在函数体中使用该变量。


##2.lambda捕获和返回