#include<stdio.h>
#include <stdlib.h>


int main(){
		int *p=NULL;
		p = malloc(sizeof(int));
		if (p==NULL){
				printf("malloc( error!\n)");
				exit(1);
		}
		*p = 65536;
		printf("%d\n",*p);
		free(p);

 		exit(0);
}
