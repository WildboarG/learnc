#include<stdio.h>
#include <stdlib.h>


int main(){
		int *p=NULL;
		p = malloc(sizeof(int));
		if (p==NULL){
				printf("malloc( error!\n)");
				exit(1);
		}
		*p = 655;
		printf("%p---->%d\n",&p,*p);
		free(p);// 释放掉内存但是指针还有可能指在这里但为野指针
		
		p = NULL;  //手动拉空
		*p = 123;
		printf("%p---->%d\n",&p,*p);
 		exit(0);
}
