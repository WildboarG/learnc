#include <stdio.h>
#include <stdlib.h>
#include "list.h"


int main(){
		list *l;    //定义一个链表类型
		int i,err;
		datatype arr[]={12,2,23,9,34,6,45};
		l =list_create(); //创建一个链表 指向表头
		if(l==NULL){
				exit(1);
		}
	//	printf("%d",__LINE__);
		for(i=0;i<sizeof(arr)/sizeof(*arr);i++){  //将数组循环写入链表
			if(list_order_insert(l,&arr[i])){
					exit(1);
			}
		}
	//	printf("%d",__LINE__);
		list_display(l);  //显示链表的值
#if 0
		int value=34;     
		list_delete(l,&value);  //删除链表的值
		list_display(l);
#endif	
		datatype value;     
		err = list_delete_at(l, 2,&value);  //按序号删除链表的值，并将删除的值带回
		if(err){
				exit(1);
		}
		list_display(l);
		printf("delete :%d\n",value);
		
		int num=6;
		value = list_find(l,num);	 //按序号查找链表，带出返回值
		printf("find number %d :%d\n",num,value);
		
		
		list_destroy(l);


		exit(0);
}
