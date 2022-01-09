#include <stdio.h>
#include <stdlib.h>

void func(void){
	static int x=0;
	x++;
	printf("%p->%d\n",&x,x);
}
int main(){
		auto int i;
		int j;
		static int k;
		printf("k=%d\n",k);
		printf("j=%d\n",j);
		printf("i=%d\n",i);
		func();
		func();
		exit(0);
}
