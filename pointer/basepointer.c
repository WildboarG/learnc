#include <stdio.h>
#include <stdlib.h>


int main(){
		int i=2;
		int *p = &i;
		int **q = &p; //二级指针
	    //int*** m = &q;//三级指针
		printf("i = %d\n",i);
		printf("&i = %p\n",&i);
		
		printf("p = %p\n",p);
		printf("&p = %p\n",&p);
		printf("*p = %d\n",*p);
		
		printf("q = %p\n",q);
		printf("*q = %p\n",*q);
		printf("**q = %d\n",**q);
		exit(0);
}
