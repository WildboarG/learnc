#include <stdio.h>
#include <stdlib.h>
#define N 10

// fibonacci 前10项 逆序存放
static void fibonacci(void){
		int i,j,temp;
		int fib[10]={1,1};
	for(i=2;i<sizeof(fib)/sizeof(fib[0]);i++)
		fib[i]=fib[i-1]+fib[i-2];
	//遍历出 fibonacci 数组前10项
	for(i=0;i<sizeof(fib)/sizeof(fib[0]);i++)
		printf("%d\t",fib[i]);
	printf("\n");
	//printf("fib[9]=%d\n",fib[9]);
	i = 0;
	j = sizeof(fib)/sizeof(fib[0])-1;
	while(i<j)
	{  		//首尾交换（只交换一般的长度就够了，否则就又交换到原来位置）
			temp = fib[i];
			fib[i]=fib[j];
			fib[j]=temp;
			i++;
			j--;
	}
	printf("fibonacci 前10项逆序排列");
	for(i=0;i<sizeof(fib)/sizeof(fib[0]);i++)
			printf("%d ",fib[i]);
	printf("\n");
	return ;
	
}
//冒泡法排序（从后往前）
//后一项前一项做比较，较大的数值被交换到后边，直到本次交换结束，最大值排到最后一个
//下一行重复，交换次数减少一次
void listdata(){
		int i,j,tmp;
		int a[N] = {12,8,45,30,98,67,2,7,68,11};
		printf("冒泡法：\n");
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

//选择法排序 
//从第二项开始作为动态项依次与第一项做比较，动态项较小的放在第一位
//重复操作首项随外循环加一 动态项从首项加一开始
//直至循环结束 每次循环的最小值始终放在最前面
void choosedata(){
		int i,j,tmp;
		int a[N] = {12,8,45,30,45,67,68,7,68,11};
		printf("选择法：\n");
		for (i=0;i<sizeof(a)/sizeof(a[0]);i++)
		{
			printf("%d ",a[i]);
		}
		for(i=0;i<N;i++){
				for(j=1+i;j<N;j++){
						if(a[j]<a[i]){
								tmp = a[j];
								a[j] = a[i];
								a[i] = tmp;
						}
				}
		}
	
		
		printf("\n");
		for (i=0;i<sizeof(a)/sizeof(a[0]);i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
}
void transhex(){

}

void main(){
		fibonacci();
		listdata();
		choosedata();
		exit(0);
}
