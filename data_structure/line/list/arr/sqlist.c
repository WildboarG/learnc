#include<stdio.h>
#include<stdlib.h>
#include "sqlist.h"

sqlist *sqlist_create(){
		sqlist *me;
		//printf("%d",sizeof(*me));  //1024*4+4=4100
		me = malloc(sizeof(*me));
		if(me==NULL){
				return NULL;
		}
		me->last=-1; //申请内存成功 将计数器置为-1
		return me;  //返回结构体指针 
}
void sqlist_create1(sqlist **ptr){
		*ptr = malloc(sizeof(**ptr));
		if(*ptr ==NULL){
				return;
		}
		(*ptr)->last=-1;
		return ;
}
int sqlist_insert(sqlist *me,int i,datatype *data){
		int j;
		if(me->last==DATASIZE-1){   //若溢出
				return -1;
		}
		if(i<0 || i >me->last+1){  //若插入位置不在空间内
				return -2;
		}
		for(j=me->last;i<=j;j--){   // 
		me->data[j+1] = me->data[j];
		}	
		me->data[i] = *data;
		me->last++;
		return 0;
}  //增加数据，特定位置，要插入数据的变量地址  ，返回状态
int sqlist_delete(sqlist *me,const int i){
 		int j;
		if(i <0 ||i >me->last){ //若要不在空间内
				return -1;
		}
		//i+1  last
		for(j=i+1;j<=me->last;j++){  
				me->data[j-1]=me->data[j];
		}
		me->last--;

		return 0;
}  //删除数据
int sqlist_find(sqlist *me,datatype *data){
		int i;
		if(sqlist_isempty(me) ==0){  //若表为空
				return -1;
		}
		for(i=0;i<me->last;i++){     //
				if(me->data[i]== *data){
						return i;
				}
		}
		return -2;
}//查找数据 ，返回下标

int sqlist_isempty(sqlist *me){
	if(me->last == -1){
			return 0;
	}
	return -1;   //不为空返回-1
} //线性表是否为空 返回状态
int sqlist_setempty(sqlist *me){
	me->last = -1;
	return 0;
}// 线性表设置为空
int sqlist_getnum(sqlist *me){
	return (me->last+1);
} //线性表一共有多少元素
void sqlist_display(sqlist *me){
		int i;
		if(me->last == -1){
				return ;
		}
		for(i=0;i<=me->last;i++){
				printf("%d ",me->data[i]);
		}
		printf("\n");
		return ;
}//遍历
int sqlist_destory(sqlist *me){
		free(me);
		return 0;
}  //销毁表 返回状态
int sqlist_union(sqlist *dest,sqlist *src){
	//dest -> 12 23 34 45 56
	//src  -> 67 78 89 23 10
	 int i;
	 for (i=0;i<=src->last;i++)
		if (sqlist_find(dest,&src->data[i]) < 0){
				sqlist_insert(dest,0,&src->data[i]);
		}
} //合并线性表
