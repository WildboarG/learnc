#include <stdio.h>
#include <stdlib.h>
#if 0
void func(int **p,int n){

		*p=malloc(n);
		if(*p==NULL){
				exit(1);
		}
		return ;
}
#else
void *func(int  *p,int n){
		p = malloc(n);
		if(p==NULL){
				exit(1);
		}
		return p;
}

#endif
int main(){
		int num=100;
		int *p=NULL;

		//func(&p,num); //执行完函数指针指向位置已经被写入内容 入口地址被暴露出来可以被释放掉
		p = func(p, num);//申请完内存的地址被返回，可以手动释放掉
		free(p);

		exit(0);
}
