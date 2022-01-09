#include <stdio.h>
#include <stdlib.h>

#define M 3

int main(){
		int i;
		int arry[M]={1,2,3};  //数组不初始化 其内容暂时是随机值
		static int arry2[M]={4}; //部分初始化  静态初始化值为0
						 
		printf("%d\n",sizeof(arry));
		for(i=0;i<M;i++)
			printf("%p ----> %d\n",&arry[i],arry[i]);
		printf("部分数组未初始化:\n");
		for(i=0;i<M;i++)
			printf("%p ----> %d\n",&arry2[i],arry2[i]);
		printf("please give arry2 input:\n");
		for(i=0;i<M;i++)
				scanf("%d\n",&arry2[i]);
		printf("\n");
		printf("给数组传入后的值\n");
		for(i=0;i<M;i++)
			printf("%p ----> %d\n",&arry2[i],arry2[i]);
		exit(0);
}
