#include <stdio.h>
#include <stdlib.h>
#define N 10

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
//冒泡法排序
void listdata(){
		int i,j,tmp;
		int a[N] = {12,8,45,30,98,67,2,7,68,11};
		for (i =0 ; i<N;i++){
				printf("%d ",a[i]);
		}
		printf("\n");
		for(i=0;i<N-1;i++){                      //排序N-1遍
				for(j=0;j<N-1-i;j++){            //每行内排序次数依次递减
						if(a[j]>a[j+1]){
								tmp = a[j];
								a[j]=a[j+1];
								a[j+1]=tmp;
						}
						
				}
		}
		for (i =0 ; i<N;i++){
				printf("%d ",a[i]);
		}
		printf("\n");
		
}
void transhex(){

}

void main(){
		//fibonacci();
		listdata();
		exit(0);
}
