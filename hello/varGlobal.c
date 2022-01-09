#include "stdio.h"
#include "stdlib.h"


int i; 


void print_star(void){
		for (i = 0; i < 5;i++)
			printf("*");
		printf("\n");
		printf("%s -> i=%d\n",__FUNCTION__,i);
}
int main(){
		for (i=0;i<5;i++)
			print_star();
		printf("%s -> i=%d\n",__FUNCTION__,i);
		exit(0);
}
