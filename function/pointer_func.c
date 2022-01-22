#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 4

/*
 * int a[M][N] = {...};
 * int *p = *a;
 * int (*q)[]=a;
 *实参
 *-> a[i][j]    *(a+i)+j   a[i]+j    p[i]   *p
 *   q[i][j]    *q         q         p+3    q+2
 *形参
 * ->  int       int *      int *     int    int
 *     int      int *      int(*)[N] int *   int(*)[N]
 * */
// int (*)[N] func_range_average(int (*q)[N],int num){
int *find_num(int (*q)[N],int num){
		if(num>M-1){
				return NULL;
		}
		return *(q+num);
}
int main(){
		//二维数组的传参
		int a[M][N]={1,2,3,4,5,6,7,8,9,10,11,12};
		int number=2;
		int i;
		int *res;
		//查第number的内容
		res = find_num(a,number);
		//显示第number的内容
		if(res != NULL){
			printf("第%d行的值：\n",number);
			for(i=0;i<4;i++){
				printf("%d ",res[i]);
			}
		printf("\n");
		}else{
				printf("NO FIND");
		}
		exit(0);
}
