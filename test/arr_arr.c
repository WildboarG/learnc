#include <stdio.h>
#include <stdlib.h>



void func(int array[3][3]){
	int i,j;
	int b[3][3]={0};
	for(i=0;i<3;i++){
			for (j=0; j<3; j++) {
				b[j][i]=array[i][j];
				b[i][j]=array[j][i];
			}
	}
	for(i=0;i<3;i++){
			for(j=0;j<3;j++){
					printf("%d ",b[i][j]);
			}
			printf("\n");
	}
}

int main(){
		int a[][3]={{100,200,300},{400,500,600},{700,800,900}};
		func(a);
		exit(0);
}
