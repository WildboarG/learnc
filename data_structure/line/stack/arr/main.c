#include <stdio.h>
#include <stdlib.h>

#include "sqstack.h"


int main(){
		int i,ret;
		datatype arr[] ={19,20,45};
		datatype data; //用于top弹栈的数据接受
		sqstack *st;  //定义一个栈指针
		st = st_create();
		if(st == NULL){
				exit(1);
		}
		for(i=0;i<sizeof(arr)/sizeof(*arr);i++){
				st_push(st,&arr[i]);
		}
		st_travel(st);
		datatype tmp=1024;  //在没有满栈之前一直可以压栈
		printf("push:%d\n",tmp);
		ret=st_push(st, &tmp);
		if(ret !=0){
				printf("st_push faild.\n");//栈满就不在压入。
		}
		else{
			printf("Push Success\n");
			st_travel(st);
		}
		
		while(st_pop(st,&data)==0){
				printf("POP:%d\n",data);//弹栈
		}
		st_destory(st);


		exit(0);
}
