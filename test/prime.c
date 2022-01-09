#include<stdio.h>
#include <stdlib.h>


//100以内的质数查找
void primenumber(){
		int i,j,mark;	
		for (i=2;i<100;i++){
				mark = 1;
				for(j=2;j<i/2;j++){
						if(i%j==0){
								mark = 0;
						}
				}
				if (mark){
						printf("%d is prime number\n",i);
				}
		}


}


int main(){
		primenumber();
		exit(0);
}
