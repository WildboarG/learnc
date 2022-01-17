#include <stdio.h>
#include <stdlib.h>
/*
 *找出abc中的最大值最小值之差，使用函数的嵌套
 *
 * */
int max(int a,int b, int c);
int min(int a,int b, int c);

int max_min(int a,int b, int c){
		int s;
		s = max(a,b,c)-min(a,b,c);
		return s;
}
int max(int a,int b, int c){
	int tmp,max;
	tmp=a>b ? a:b;
	max=tmp>c ? tmp:c;
	return max;
}
int min(int a,int b,int c){
	int tmp,min;
	tmp=a<b ? a:b;
	min=tmp<c ? tmp:c;
	return min;
}

int main(){
		int a=3,b=8,c=2;
		int res;
		res=max_min(a,b,c);
		printf("max-min=%d\n",res);




		return 0;

}
