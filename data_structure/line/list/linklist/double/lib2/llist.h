#ifndef LLIST_H__
#define LLIST_H__
#define LLIST_FORWARD 1  /*首部插入：插入数据到环形链表的头部之后*/
#define LLIST_BACKWARD 2 /*尾部插入：插入数据到环形链表的头部之前*/

typedef void llist_op(const void *); //回调函数

typedef int llist_cmp(const void *,const void *);

struct llist_node_st{  //普通节点的结构体

		struct llist_node_st *prev;
		struct llist_node_st *next;
		char data[0];  //通过数组占位一个起始位置来将数据放那入结构体中 （此时数据是存放在结构体中而不是指针指向另开辟一块内存） 
					   //实现了变长数据的数据双向环链数据类型
};

typedef struct {       //头节点
		int size;
		struct llist_node_st head;
}LLIST;
//传入用户要存放数据的长度
LLIST *llist_create(int initsize);  //创建链表 （创建头节点）
//插入：插入数据插入模式
int llist_insert(LLIST *, const void *data,int mode);

void *llist_find(LLIST *,const void *key,llist_cmp *);

int llist_deleted(LLIST *,const void *key,llist_cmp *);

int llist_fetch(LLIST *,const void *key,llist_cmp *,void *data);

void llist_travel(LLIST *,llist_op *); //显示 （指针指向这种类型的函数）

void llist_destory(LLIST *);   //销毁
#endif
