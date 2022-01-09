#include <stdio.h>
#include <stdlib.h>
#define LEFT 0
#define RIGHT 100


void func1(){
		int i;
		int start,end=10;
		int sum =0;
		i = LEFT;
		for (;;){
				sum += i;
				i++;
				if (i>RIGHT)
						break;

		}
		printf("sum = %d\n",sum);
}
void if_goto(){
		int i;
		int sum=0;
		i=LEFT;
loop:
		sum +=i;
		i++;
		if (i<=RIGHT)
				goto loop;
		printf("sum = %d\n",sum);
}
void main(){
		func1();
		if_goto();
		exit(0);
}
