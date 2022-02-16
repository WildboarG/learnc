#ifndef STACK_H__
#define STACK_H__
#include "llist.h"
//调用直线的双向环链的使用二次封装

typedef LLIST STACK; 

STACK *stack_create(int); //创建链式栈，拿捏头

int stack_push(STACK *,const void *data);//压栈，只能前驱插入

int stack_pop(STACK *,void *data);//弹栈

void stack_destory(STACK *);//销毁栈


#endif
