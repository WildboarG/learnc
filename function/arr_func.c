#include <stdio.h>
#include <stdlib.h>

//void func_arr(int p[],int n){
static void func_arr(int *p,int n){
	int i;
	printf("%s->%d\n",__FUNCTION__,sizeof(p));
	for(i=0;i<n;i++){
			printf("%d ",*(p+i));
	}
}
void func(int p[],int n){
		int i,j,m;
		int tmp;
		j=(n-1)/2;
		for(i=0;i<=j;i++){
				m=n-1-i; //当前尾值
				tmp=p[i];
				p[i]=p[m];
				p[m]=tmp;	
		}

}

int main (){
		int i;
		//数组与函数的关系
		int a[]={1,3,5,7,9};
		
		//正常查看数组内容用for 
		for(i=0;i<sizeof(a)/sizeof(*a);i++){
				printf("%d ",a[i]);
		}
		printf("\n");
		
		/*
		//对函数传递数组，并输出
		printf("%s->%d\n",__FUNCTION__,sizeof(a));
		func_arr(a,sizeof(a)/sizeof(*a));
		*/
		//用函数传递数组来逆序改变数组输出
		func(a,sizeof(a)/sizeof(*a));
		for(i=0;i<sizeof(a)/sizeof(*a);i++){
				printf("%d ",a[i]);
		}
		printf("\n");
		exit(0);
}
