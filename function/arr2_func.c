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





//void func(int p[][N],int m,int n){
void func(int (*p)[N],int m,int n){
		int i,j;
		printf("int (*p)[N]=%d\n",sizeof(p));//指针长度
		for(i=0;i<m;i++){
				for(j=0;j<n;j++){
						//printf("%2d ", *(*(p+i)+j));
						printf("%2d",p[i][j]);
				}
				printf("\n");

		}

}

float func_average(int *p,int n ){
		int i;
		float sum=0;
		for(i=0;i<n;i++){
				sum+=p[i];
		}
		return sum/n;

}

float func_range_average(int (*q)[N],int num){
		int i;
		float sum;
		for(i=0;i<N;i++){
				sum+=*(*(q+num)+i);
		}
		return sum/N;
}
int main(){
		float ave;
		//二维数组的传参
		int a[M][N]={1,2,3,4,5,6,7,8,9,10,11,12};
		printf("a[M][N]=%d\n",sizeof(a));//传入长度
		//func(a,M,N);
		
		//计算二维数组的平均值
		ave=func_average(*a,M*N);
		printf("nve=%f\n",ave);
		
		int number=1;  //指定行号
		//计算二维数组某一行的平均值
		ave = func_range_average(a,number);
		printf("nve=%f\n",ave);

		exit(0);
}
