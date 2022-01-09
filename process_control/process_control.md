## 流程控制
---
顺序 ，选择，循环

1. 顺序：语句逐句出现
   选择：出现了一种以上的情况
   循环：在某个条件成立的情况下，重复执行的动作

2. 关键字：
   选择： if-else  switch-case
   循环： while do-while for if-goto
   辅助控制：continue break 

---

### 详解

#### if-else:
`格式`： 
		if(exp)
			cmd;
	或者
		if(exp)
			cmd1;
		else
			cmd2;
注意：else 只与最近的if 相匹配.   可以加括号来限定范围

#### switch-case:
`格式`：
	switch(exp)
		{
		case 常量/常量表达式：
			break;
		case 常量/常量表达式：
			break;
		...
		default:
		}

#### 循环：

`格式`：

	while:(最少执行零次)
		while(exp)
			loop;

​	do-while: (最少执行一次)
​			do{
​				loop;
​				}while(exp);
​				
​	for：(至少循环0次)
​		for(exp1;exp2;exp3)
​			loop;
​	if-goto:(慎用:goto 是无条件跳转，且不能跨函数跳转)

死循环：

​	-  while(1);

​	-  for(;;);

​		
