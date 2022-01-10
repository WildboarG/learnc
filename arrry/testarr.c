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
//进制转换
//输入10进制数
//输入要转换的进制
static void base_convert(){
		int number,base,i=0;
		int n[128];
		printf("进制转换");
		printf("Please enter the converted number:");
		scanf("%d",&number);
		printf("Please enter the base:");
		scanf("%d",&base);
		do{
			n[i]=number%base;
			number=number/base;
			i++;
		}while(number != 0);
		for(i--;i>=0;i--){
				if(n[i]>=10)
						printf("%c",n[i]-10+'A');
				else
						printf("%d",n[i]);
		}
		printf("\n");
}


//删除法求质数 1000内
//建立1001长的数组 使数字刚好对应下表 ：i[2]=2
//从i=2开始将i的整数倍做非质数标记 列入 4 6 8 每次加i 都做标记
//循环打印输出，将非标记的下表循环输出该下表就是质数
static void primer(){
		int i,j;
		//数组内初始化0
		char primer[1001]={0};
		for(i=2;i<1001;i++){
				if(primer[i] == 0)
				//将i的倍数做标记
				for(j=i*2;j<1001;j+=i){
						primer[j]=-1;
				}
			}
		
		for(i=2;i<1001;i++){
				//如果没有标记就说明当前下表是质数 输出下标志
				if(primer[i]==0)
					printf("%d ",i);
		}
		printf("\n");
}
void main(){
		//fibonacci();
		//listdata();
		//choosedata();
		//base_convert();
		primer();
		exit(0);
}
