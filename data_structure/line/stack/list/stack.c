#include <stdio.h>
#include <stdlib.h>

#include "llist.h"
#include "stack.h"


//创建链式栈，拿捏头节点
LLIST *stack_create(int initsize){
		return llist_create(initsize);
}

//调用链表的插入进行压栈，一般以首部插入的方式压栈LLIST_FORWORD（显示的先进后出）  # 尾部插入：弹栈后为正常顺序的显示（其本质还是先入后出）
int stack_push(STACK *ptr,const void *data){
		return llist_insert(ptr, data, LLIST_BACKWARD);
}


/* 弹栈  _总是从栈顶删除
*  @ptr : 拿捏栈的操作节点（头）
*  @data :用于弹栈带出的数据临时存放
*  @always_match:为了顺应fetch 而构建的假函数
*/
static int always_match(const void *p1,const void *p2){
		return 0;
}
int stack_pop(STACK *ptr, void *data){
		return llist_fetch(ptr,(void *)0,always_match,data);
}

//销毁链表包括头以及各个节点
void stack_destory(STACK *ptr){
		llist_destory(ptr); //销毁链表包括头以及各个节点
}

