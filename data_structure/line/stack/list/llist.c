#include <stdio.h>
#include <stdlib.h>
#include "llist.h"
#include <string.h>
LLIST *llist_create(int initsize){ //创建头节点（创建一个链表头）
		LLIST *new;
		new = malloc(sizeof(*new));
		if(new ==NULL){
				return NULL;
		}
		new->size=initsize;   //头节点初始化
		new->head.prev = &new->head;
		new->head.next =&new->head;
		return new;
}
int llist_insert(LLIST *ptr, const void *data,int mode){
		struct llist_node_st *newnode;
		newnode= malloc(sizeof(*newnode) + ptr->size );//创建新节点用于插入 若用char[1]来占位不对齐的情况下会多占用4个字节空间 申请内存时候可以减去
		if(newnode==NULL){
				return -1;
		}
		//拷贝数据（存放地址，数据，数据大小）
		memcpy(newnode->data,data,ptr->size);  //newnode->data 是数组占位符的起始位置

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
		else { //error
			return -3;
		}
		return 0;
}

static struct llist_node_st * find_(LLIST *ptr,const void *key,llist_cmp *cmp){
		struct llist_node_st *cur;
		for(cur=ptr->head.next;cur!=&ptr->head;cur=cur->next){
			if(cmp(key,cur->data)==0){
					break;
			}
		}
		return cur;
}
void *llist_find(LLIST *ptr,const void *key,llist_cmp *cmp){
	  struct llist_node_st *node;
	  node=find_(ptr,key,cmp);
	  if(node == &ptr->head){
			  return NULL;
	  }
	  return node->data;
}

int llist_deleted(LLIST *ptr,const void *key,llist_cmp *cmp){
		struct llist_node_st *node;
		node=find_(ptr,key,cmp);  //如果没有查到返回的是头节点
		if(node == &ptr->head){   //若是头节点就不能删除
				return -1;
		}//找到就脱链
		node->prev->next=node->next;
		node->next->prev=node->prev;
		free(node);
		return 0;
}
int llist_fetch(LLIST *ptr,const void *key,llist_cmp *cmp,void *data){
	struct llist_node_st *node;
	node=find_(ptr,key,cmp);
	if(node==&ptr->head){
			return -1;
	}
	node->prev->next=node->next;
	node->next->prev=node->prev;
	if(data != NULL){
			memcpy(data,node->data,ptr->size);
	}
	free(node);
	return 0;

}
//显示链表数据
void llist_travel(LLIST *ptr,llist_op *op){ //通过回调函数把数据传回给用户
	struct llist_node_st *cur;
	for(cur=ptr->head.next;cur!=&ptr->head;cur=cur->next){
			op(cur->data);

	}
}
void llist_destory(LLIST *ptr){
		struct llist_node_st *cur,*next;
		for(cur=ptr->head.next;cur!=&ptr->head;cur=next){
				next = cur->next;
				free(cur);
		}
		free(ptr);  //销毁头
}
