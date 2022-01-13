#include <stdio.h>
#include <stdlib.h>


int main(){
		int i=2;
		int *p =&i;

		printf("i = %d\n",i);
		printf("&i = %p\n",&i);
		printf("p = %p\n",p);
		printf("&p = %p\n",&p);

		exit(0);
}
