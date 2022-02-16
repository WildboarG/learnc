#include <stdio.h>
#include <stdlib.h>

#include "sqstack.h"

int i;

sqstack *st_create(void){
  sqstack *st;
  st=malloc(sizeof(*st)); 
  if(st == NULL){
		  return NULL;
  }
  st->top=-1;  //指向栈顶
  
  return st;
  
}
int st_isempty(sqstack *st){//探空
	return (st->top==-1);
}
int st_push(sqstack *st,datatype *data){//入栈
	if(st->top == (MAXSIZE -1)){  //真实存储长度（最后一个仓的起始位置）
			return -1;   //若没空间就返回
	}
	st->data[++st->top]=*data;  //栈顶位置加一，数据放入data[] 中。
	return 0;
}
int st_pop(sqstack *st,datatype *data){//出栈
	if(st_isempty(st)){
			return -1;
	}
	*data = st->data[st->top--];//先出栈数据 。栈顶位置减一。
	return 0;
}
int st_top(sqstack *st,datatype *data){ //查看栈顶
	if(st_isempty(st)){
			return -1;
	}
	*data=st->data[st->top];  //出栈并带出数据
	return 0;
}
void st_travel(sqstack *st){//显示
		if(st_isempty(st)){
				return ;
		}
		for(i=0;i <= st->top;i++){
				printf("%d ",st->data[i]);
		}
		printf("\n");
}
 void st_destory(sqstack *st){
		 free(st); //释放栈（顺序栈固定了栈的空间大小（长度））
 }
