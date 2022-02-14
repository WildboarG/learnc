#ifndef LLIST_H__
#define LLIST_H__
#define LLIST_FORWARD 1  /*首部插入：插入数据到环形链表的头部之后*/
#define LLIST_BACKWARD 2 /*尾部插入：插入数据到环形链表的头部之前*/

typedef void LLIST;   //欺骗用户LLIST是一个任意类型,从而隐藏了我们的数据结构

typedef void llist_op(const void *); 
typedef int llist_cmp(const void *,const void *);

LLIST *llist_create(int initsize); 

int llist_insert(LLIST *, const void *data,int mode);

void *llist_find(LLIST *,const void *key,llist_cmp *);

int llist_deleted(LLIST *,const void *key,llist_cmp *);

int llist_fetch(LLIST *,const void *key,llist_cmp *,void *data);

void llist_travel(LLIST *,llist_op *); //显示 （指针指向这种类型的函数）

void llist_destory(LLIST *);   //销毁

#endif
