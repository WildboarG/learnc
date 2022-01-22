#include <stdio.h>
#include <stdlib.h>



int add(int a,int b){

		return a+b;
}
int sub(int a,int b){
		return a-b;
}
int main(){
		int a=3,b=5;
		int ret;
		//指针函数: 函数的返回值是指针
		//int *func(int a);
		
		//函数指针：指针指向的是一个函数类型
		//int (int,int) *p;
		//int (*p)(int,int);
		//int (*q)(int,int);
		//p=add;
		//q=sub;
		//ret = p(a,b);
		//printf("%d\n",ret);
		//ret= q(a,b);
		//printf("%d\n",ret);
		
		//函数指针数组
		//是一个数组，数组存放的是指针，指针指向函数
		int (*arr[2])(int,int);
		int i;
		arr[0]=add;
		arr[1]=sub;
		for(i=0;i<2;i++){
				ret=arr[i](a,b);
						printf("%d\n",ret);
		}


		exit(0);
}
