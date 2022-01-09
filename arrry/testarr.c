#include <stdio.h>
#include <stdlib.h>


// fibonacci 前10项 逆序存放
static void fibonacci(void){
		int i,j,temp;
		int fib[10]={1,1};
	for(i=2;i<sizeof(fib)/sizeof(fib[0]);i++)
		fib[i]=fib[i-1]+fib[i-2];
	for(i=0;i<sizeof(fib)/sizeof(fib[0]);i++)
		printf("%d\t",fib[i]);
	printf("\n");
	//printf("fib[9]=%d\n",fib[9]);
	i = 0;
	j = sizeof(fib)/sizeof(fib[0])-1;
	while(i<j)
	{
			temp = fib[i];
			fib[i]=fib[j];
			fib[j]=temp;
			i++;
			j--;
	}
	for(i=0;i<sizeof(fib)/sizeof(fib[0]);i++)
			printf("%d",fib[i]);
	printf("\n");
	return ;
	
}
void listdata(){

}
void transhex(){

}

void main(){
		fibonacci();
		exit(0);
}
