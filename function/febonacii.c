#include <stdio.h>
#include <stdlib.h>

/*
 * 用递归实现febonacii 第n项值
 * 1,1,2,,3,5,8,13,21,34...
 * */

int fib(int n){
		if(n<1){
				return -1;
		}
		if(n==1 || n==2){
				return 1;
		}
		return fib(n-1)+fib(n-2);

}

int main(){
		int n;
		int res;
		scanf("%d",&n);
		res=fib(n);
		printf("fib[%d]=%d\n",n,res);

		return 0;
}
