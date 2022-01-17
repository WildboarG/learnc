#include <stdio.h>
#include <stdlib.h>




long func(int n){
		if (n<0){
				return -1;
		}
		if(n==0 |n==1){
				return 1;
		}

		return n *func(n-1);
}

int main(){

		int n;
		long res;

		scanf("%d",&n);
		res = func(n);
		printf("%d!=%d\n",n,res);


		return 0;
}
