#include <stdio.h>
#include <stdlib.h>
#include "llist.h"

#define NAMESIZE 32

struct score_st{
		int id;
		char name[NAMESIZE];
		int math;
		int chinese;
};
void print_s(const void *record){
		const struct score_st *r = record;
		printf("%d %s %d %d \n",r->id,r->name,r->math,r->chinese);
}
int main(){
		int i,ret;
		struct score_st tmp;
		LLIST *handler;
		handler = llist_create(sizeof(struct score_st));
		if(handler==NULL){
				exit(1);
		}
		for(i=0;i<7;i++){
			tmp.id = i;
			snprintf(tmp.name,NAMESIZE,"std%d",i);
			tmp.math=rand()%100;
			tmp.chinese=rand()%100;
			ret = llist_insert(handler,&tmp,LLIST_FORWARD);
			if(ret){
					exit(1);
			}
		}	
		llist_travel(handler,print_s);
		llist_destory(handler);	
		exit(0);
}

