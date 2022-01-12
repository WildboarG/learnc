#include <stdio.h>
#include <stdlib.h>
#define N 3

int main(){
		int i;
		char str[N]={'a','b','c'};
		for(i=0;i<N;i++){
				printf("%p-->%c",&str[i],str[i]);
		}
		printf("\n");

		exit(0);
}
