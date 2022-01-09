#include <stdio.h>
#include <stdlib.h>

#define LEFT  1
#define RIGHT 100


void func1(){
		int i;
		int sum = 0;
		i = LEFT;
		
		while(i<=RIGHT)
		{
				sum += i;
				i++;
		}
		printf("sum = %d",sum);
}

void func2(){
		int sum = 0;
		int i;
		i = LEFT;
		do{
				sum += i;
				i++;
		}while(i<=RIGHT);
		printf("sum = %d\n",sum);
}
int main(){
		func1();
		func2();
		exit(0);
}
