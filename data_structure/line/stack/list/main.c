#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stack.h>
#define NAMESIZE 32

struct score_st{
		int id;
		char name[NAMESIZE];
		int math;
		int chinese;
};

void printf_s(void *record){
		struct score_st *r =record;
		printf("%d %s %d %d\n",r->id,r->name,r->math,r->chinese);
}

int main(){
		int i,ret;
		STACK *st;
		struct score_st tmp;
		//创建链式栈，拿捏头节点
		st = stack_create(sizeof(struct score_st)); 
		if(st==NULL){
				exit(1);
		}
		for(i=0;i<10;i++){
			tmp.id=i;
			snprintf(tmp.name,NAMESIZE,"std%d",i);
			tmp.math = rand()%100;
			tmp.chinese =rand()%100;
			if(stack_push(st,&tmp)){
				exit(1);
				}
		}
		//弹栈带出的数据被回调函数printf_s 解析打印
		while(1){
			ret = stack_pop(st, &tmp);
			if(ret==-1){
			break;
			}
			printf_s(&tmp);
		}
		//弹栈销毁
		stack_destory(st);
		exit(0);
}
