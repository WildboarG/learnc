#ifndef LLIST_H__
#define LLIST_H__
#define LLIST_FORWARD 1  /*首部插入：插入数据到环形链表的头部之后*/
#define LLIST_BACKWARD 2 /*尾部插入：插入数据到环形链表的头部之前*/

typedef void llist_op(const void *); //回调函数

typedef int llist_cmp(const void *,const void *);

struct llist_node_st{  //普通节点的结构体

		struct llist_node_st *prev;
		struct llist_node_st *next;
		char data[0];
};

typedef struct llist_head {       //头节点
		int size;
		struct llist_node_st head;
		int (*insert)(struct llist_head *,const void *,int);     //以函数指针的形式将函数放入结构体中，实现类的概念
		void *(*find)(struct llist_head *,const void *,llist_cmp *);
		int (*deleted)(struct llist_head *,const void *,llist_cmp *);
		int (*fetch)(struct llist_head *,const void *, llist_cmp *,void *);
		void (*travel)(struct llist_head *, llist_op *);
}LLIST;
//传入用户要存放数据的长度
LLIST *llist_create(int initsize);  //创建链表 （创建头节点）
void llist_destory(LLIST *);   //销毁链表
#endif
