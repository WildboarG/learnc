#include <stdio.h>
#include <stdlib.h>

#include "list.h"

list *list_create(){   //创建链表将表头返回
	list *me;
	printf("一个表节点占：%d\n",sizeof(*me));
	me = malloc(sizeof(*me));
	if (me ==NULL){
			return NULL;
	}
	me->next = NULL;   //若申请成功将下一块地址(后继)先置空，防止野指针
	return me;    //返回头
}
//按顺序插入
int list_insert_at(list *me, int i, datatype *data){
	int j = 0;
	list *node=me,*newnode;
	if(i<0){
			return -1;
			// return -EINvAL;
	}
	while(j<i && node !=NULL){
		node=node->next;
		j++;
	}
	if (node){
		newnode = malloc(sizeof(*newnode));
		if(newnode==NULL){
				return -2;
		}
		newnode->data = *data;
		//newnode->next =NULL;

		newnode->next =node->next;  
		node->next = newnode;
		return 0;
	}
	else{   //如果i要插入的那块地址已经为空了或者越界 就报错
			return -3;
	}
	
}
//按值的排序插入链表 返回状态 
int list_order_insert(list *me,datatype *data){
		list *p=me, *q;
		while(p->next && p->next->data < *data){ //直到值不小于当前p的值
				p = p->next;
		}
		q =malloc(sizeof(*q));   //申请一块新的内存
		if(q==NULL){
				return -1;
		}
		else{
				q->data =*data ;  //存放要插入的值
				q->next = p->next; // p的后继 给到q的后继
				p->next = q;      // q的地址给到p的后继
				return 0;        // 完成插入
		}
			
}
//按顺序删除 带回被被删除的值
int list_delete_at(list *me,int i,datatype *data){
		int j=0;
		list *p =me,*q;
		*data = -1;      //先给要带回去值的空间置-1;如果不存在就把-1带回去
		if(i<0){
				return -1;
		}
		while(j<i && p){
				p = p->next;
				j++;   //p指向借助循环找到要删除值的位置
		}
		if(p){
			q = p->next;  //p的后继动给到q
			p->next = q->next; // q为当前要删除的值，把q的后驱给q的后驱
			*data = q->data;  //把q的值带出
			free(q);        //释放掉q
			q=NULL;        //把q拉空，防止变成野指针
			return 0;
		}
		else{
				return -2;   //要删除的位置没有值
		}
}
//按值删除链表的值 返回状态
int list_delete(list *me,datatype *data){
		list *p=me ,*q;
		while(p->next && p->next->data != *data){
				p = p->next;  //链表指针移动到要删除的值
		}
		if(p->next ==NULL){   //如果没找到要删除的内容
				return -1;
		}
		else{                 //找到要删除的内容
				q = p->next;   //p的后驱为要删除的值 ，p的后驱给到q
				p->next = q->next; //q的后驱给到p的后驱
		}
		return 0;

}
//找到要序号的内容  
int list_find(list *me, int i){
		int j,value;
		list *q=me->next;
		if(i<0){
				return -1;
		}
		for(j=0;j<i;j++){
				if(q == NULL){
						return -2;
				}
				value=q->data;
				q=q->next;
		}
		return value;
}
//链表是否为空
int list_isempty(list *me){
	if(me->next==NULL){
			return 0;
	}
	return -1;
}
//链表内容的显示
void list_display(list *me){
		list *p =me->next;
		if(list_isempty(me)==0){
				return ;
		}
		while(p != NULL){
				printf("%d ",p->data);
				p = p->next;
		}
		printf("\n");
		return ;
}
//链表的释放
void list_destroy(list *me){
	list *node ,*next;
	for(node =me->next;node!=NULL;node=next){
			next =node->next;  
			free(node);//循环释放掉链表的中的值

	}
	free(me); //释放掉头
	return ;
}
