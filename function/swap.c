#include <stdio.h>
#include <stdlib.h>

void swap(int *p,int *q){
		int tmp;
		tmp=*p;
		*p=*q;
		*q=tmp;
	
}



//函数传参 值传递
int print_value(int a,int b){

		printf("i=%d,j=%d\n",a,b);
		return 0;
}


int main(){
		int i=3,j=5;
		//值传递
		//print_value(i,j);
		//地址传参 
		//交换变量
		swap(&i,&j);
		printf("i=%d,j=%d\n",i,j);

		exit(0);
}
