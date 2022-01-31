#include <stdio.h>
#include <stdlib.h>
#include "llist.h"
#include <string.h>
LLIST *llist_create(int initsize){
		LLIST *new;
		new = malloc(sizeof(*new));
		if(new ==NULL){
				return NULL;
		}
		new->size=initsize;
		new->head.data=NULL;
		new->head.prev = &new->head;
		new->head.next =&new->head;
		return new;
}
int llist_insert(LLIST *ptr, const void *data,int mode){
		struct llist_node_st *newnode;
		newnode= malloc(sizeof(*newnode));
		if(newnode==NULL){
				return -1;
		}
		newnode->data = malloc(ptr->size);
		if(newnode->data==NULL){
				return -2;
		}
		memcpy(newnode->data,data,ptr->size);
		if(mode ==LLIST_FORWARD){
			newnode->prev =&ptr->head;
			newnode->next = ptr->head.next;
			newnode->prev->next =newnode;
			newnode->next->prev =newnode;
		}
		else if (mode == LLIST_BACKWARD) {
			newnode->prev=ptr->head.prev;
			newnode->next=&ptr->head;
			newnode->prev->next =newnode;
			newnode->next->prev =newnode;
		}
		else {
			return -3;
		}
		return 0;
}
/*
llist_find();

llist_deleted();

llist_fetch();
*/
void llist_travel(LLIST *ptr,llist_op *op){
	struct llist_node_st *cur;
	for(cur=ptr->head.next;cur!=&ptr->head;cur=cur->next){
			op(cur->data);
	}
}
void llist_destory(LLIST *ptr){
		struct llist_node_st *cur,*next;
		for(cur=ptr->head.next;cur!=&ptr->head;cur=next){
				next = cur->next;
				free(cur->data);
				free(cur);
		}
		free(ptr);
}
