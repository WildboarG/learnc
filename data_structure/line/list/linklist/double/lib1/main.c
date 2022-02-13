#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "llist.h"

#define NAMESIZE 32

struct score_st{
		int id;
		char name[NAMESIZE];
		int math;
		int chinese;
};
static void print_s(const void *record){
		const struct score_st *r = record;  //类型转换
		printf("%d %s %d %d \n",r->id,r->name,r->math,r->chinese);
}
static int id_cmp(const void *key,const void *record){
		const int *k=key;
		const struct score_st *r=record;
		return (*k-r->id);
}
static int name_cmp(const void *key,const void *record){
		const char *k=key;
		const struct score_st *r=record;
		return strcmp(k,r->name);
}
int main(){
		int i,ret;
		struct score_st tmp;
		LLIST *handler;  //用一个指针来指向创建的头
		handler = llist_create(sizeof(struct score_st));
		if(handler==NULL){
				exit(1);
		}
		for(i=0;i<7;i++){
			tmp.id = i;
			snprintf(tmp.name,NAMESIZE,"std%d",i);
			tmp.math=rand()%100;
			tmp.chinese=rand()%100;
			ret = llist_insert(handler,&tmp,LLIST_BACKWARD);
			if(ret){
					exit(1);
			}
		}	
		llist_travel(handler,print_s);
		printf("\n");
		

		int id=3;
		struct score_st *data;
		data=llist_find(handler,&id,id_cmp);
		if (data==NULL){
				printf("cannot find!\n");

		}
		else{  
				printf("find id=%d : ",id);
				print_s(data);
				printf("\n");
		}

		//int index=2;
		struct score_st *datab;
		datab = malloc(sizeof(NAMESIZE));
		char *del_name="std6";
		ret = llist_fetch(handler,del_name,name_cmp,datab);
		if(ret){
				printf("llist_delete failed!\n");
		}
		
	 	llist_travel(handler,print_s);

		printf("\n");
		print_s(datab);




		llist_destory(handler);	//销毁链表
		exit(0);
}

