#include <stdio.h>
#include "stdlib.h"

#define M 2
#define N 3
#define K 2

//矩阵转置
static void change(void){
		int a[M][N]={1,2,3,4,5,6},b[N][M];
		int i,j;
		for(i=0;i<M;i++){
				for(j=0;j<N;j++){
						printf("%d ",a[i][j]);
						b[j][i]=a[i][j];
				}
				printf("\n");
		}
		for(i=0;i<N;i++){
				for(j=0;j<M;j++){
						printf("%d ",b[i][j]);

				}
				printf("\n");
				
		}
		printf("\n");

}
//最大值及所在位置
static void max(){
		int a[M][N]={43,4,25,89,65,9};
		int i,j;
		int max=a[0][0],row=0,colum=0;
		for(i=0;i<M;i++){
				for(j=0;j<N;j++){
						if(max<a[i][j]){
								max=a[i][j];
								row=i;
								colum=j;
						}
				}
		}
		printf("max=%d \nrow=%d colum=%d\n",max,row,colum);

}
//各个行列的值
static void clv(void){
		int a[4][5]={{1,2,3,4},{5,6,7,8},{9,10,1,2}}; //3行4列
		int i,j;
		for(i=0;i<3;i++){
				for(j=0;j<4;j++){
						a[3][4] += a[i][j];
						a[3][j] += a[i][j];
						a[i][4] += a[i][j];
						
				}
		}
		for(i=0;i<4;i++){
				for(j=0;j<5;j++){
						printf("%4d",a[i][j]);
				}
				printf("\n");
		}
}
//矩阵乘积
static void mul(){
		int a[M][N]={1,2,3,4,5,6};
		int b[n][m]={1,0,0,1,1,0};
		int c[M][K];
		int i,j,k;
		for(i=0;i<M;i++){
				for(j=0;j<K;j++){
						for(k=0;k<N;k++){
								c[i][j] += a[i][k] * b[k][j];
						}
				}
		}
}
int main(){
	    //change();
		//max();
		clv();
		exit(0);
}
