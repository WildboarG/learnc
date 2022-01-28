#include <stdio.h>
#include <stdlib.h>

#include "list.h"

list *list_create(){
	list *me;
	me = malloc(sizeof(*me));
	if (me ==NULL){
			return NULL;
	}
	me->next = NULL;
	return me;
}
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
	else{
			return -3;
	}
	
}
int list_order_insert(list *me,datatype *data){

}
int list_delete_at(list *me,int i,datatype *data){

}
int list_delete(list *me,datatype *data){

}
int list_isempty(list *me){
	if(me->next==NULL){
			return 0;
	}
	return -1;
}
void list_display(list *me){
		list *node =me->next;
		if(list_isempty(me)==0){
				return ;
		}
		while(node != NULL){
				printf("%d ",node->data);
				node = node->next;
		}
		printf("\n");
		return ;
}
void list_destroy(list *me){
	list *node ,*next;
	for(node =me->next;node!=NULL;node=next){
			next =node->next;
			free(node);

	}
	free(me);
	return ;
}
