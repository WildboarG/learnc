#include <stdio.h>
# define PI 3.1415926
# define ADD 2+3
# define MAX(a,b) \
	({int A=a,B=b;((A)>(B) ? (A) : (B));})

int max (int a, int b){
		return a>b ? a : b;
}
int main(){
		int i = 5 , j = 3;
		printf("%d\n",MAX(i++,j++));
		//max(i++,j++)
		//printf ("%d\n",ADD * ADD);
		return 0;
}
