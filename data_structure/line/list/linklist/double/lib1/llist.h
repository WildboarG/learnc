#ifndef LLIST_H__
#define LLIST_H__
#define LLIST_FORWARD 1  /*首部插入：插入数据到环形链表的头部之后*/
#define LLIST_BACKWARD 2 /*尾部插入：插入数据到环形链表的头部之前*/

typedef void llist_op(const void *); //函数

typedef int llist_cmp(const void *,const void *);

struct llist_node_st{  //普通节点的结构体
		void *data;
		struct llist_node_st *prev;
		struct llist_node_st *next;
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
