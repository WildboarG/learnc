#ifndef LLIST_H__
#define LLIST_H__
#define LLIST_FORWARD 1
#define LLIST_BACKWARD 2

typedef void llist_op(const void *);

struct llist_node_st{
		void *data;
		struct llist_node_st *prev;
		struct llist_node_st *next;
};

typedef struct {
		int size;
		struct llist_node_st head;
}LLIST;
LLIST *llist_create(int initsize);

int llist_insert(LLIST *, const void *data,int mode);
/*
llist_find();

llist_deleted();

llist_fetch();
*/
void llist_travel(LLIST *,llist_op *);

void llist_destory(LLIST *);
#endif
