#include "stdio.h"
#include <stdlib.h>

#define M 2
#define N 3

int main(){
		int arr[][N]={{1,3},{4}};
		int i,j;
#if 0 
		//cmd scanf
		for(i=0;i<M;i++){
				for(j=0;j<N;j++){
						scanf("%d",&arr[i][j]);
				}
		}
#endif
		for(i=0;i<M;i++){
				for(j=0;j<N;j++){
						printf("%p--->%d ",&arr[i][j],arr[i][j]);
				}
				printf("\n");
		}


		exit(0);
}
