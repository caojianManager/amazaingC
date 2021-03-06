# 排序算法

> 排序算法我们可根据时间复杂度大致分为3类；
+ O(n^2): 冒泡, 插入, 选择; <基于比较>
+ O(nLogN): 快排, 归并; <基于比较>
+ O(n): 桶排, 计数, 基数; <不基于比较>











### 问题

1.插入排序和冒泡排序的时间复杂度相同，都是 O(n^2)，在实际的软件开发里，为什么我们更倾向于使用插入排序算法而不是冒泡排序算法呢？     
2.如何分析"排序算法"？
> 我们可以从这三方面来分析排序算法： 排序算法的执行效率  ｜ 排序算法的内存消耗  ｜   排序算法的稳定性   

*排序算法的执行效率*:    
1.最好/最坏情况, 平均情况时间复杂度； 2.时间复杂度的系数,阶数,低阶; 3.比较次数和交换（或移动）次数;   
*排序算法的内存消耗*:    
针对排序算法的空间复杂度引入新的概念 --> 原地排序(空间复杂度为O(1)的排序算法) ->  冒泡, 插入, 选择;    
*排序算法的稳定性*:     
待排序的序列中存在相同元素，排序后，相同元素的先后顺序不变则称为稳定排序算法，否则称为不稳定排序算法。
 