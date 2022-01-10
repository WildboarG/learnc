#include <stdio.h>

#define N 5

float fun(float s[N][N]){
		int i,j,k=0;
		float sum=0;
		for(i=0;i<N;i++){
				for(j=0;j<N;j++){
						if(i==0 || i==N-1 ||j==0 || j==N-1){
								sum =sum+s[i][j];
								k++;
						}
				}
		}
		return sum/k;

}

void main(){
		float a[N][N]={{0,1,2,7,9},
					   {1,9,7,4,5},
					   {2,3,8,3,1},
					   {4,5,6,8,2},
					   {5,9,1,4,1}};
		printf("%f\n",fun(a));
}
