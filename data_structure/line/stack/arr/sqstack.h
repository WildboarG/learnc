#ifndef SQSTACK_H__
#define SQSTACK_H__

#define MAXSIZE 5
typedef int datatype;

typedef struct node_st{
	datatype data[MAXSIZE];  //顺序栈：数据以数组的形式存放，长度固定
	int top;                 // 指定栈的起始位置一般写成-1
}sqstack;

sqstack *st_create(void);  //创建栈返回结构体指针

int st_isempty(sqstack *);//探空

int st_push(sqstack *,datatype *);//入栈

int st_pop(sqstack *,datatype *);//出栈

int st_top(sqstack *,datatype *); //查看栈顶

void st_travel(sqstack *);//显示

void st_destory(sqstack *);





#endif
