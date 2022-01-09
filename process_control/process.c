#include <stdio.h>
#include <stdlib.h>

/*
 *score  [90-100] A
 *       [80-90]  B
 *       [70-80]  C
 *       [60-70]  D
 *       [0-60]   E
 *
 * */


void score(void){
		int score;
		printf("Enter a score :[0-100]:");
		scanf("%d",&score);
		if(score<0 || score>100){
				fprintf(stderr,"Input error!!");
				exit(1);
		}
	 	#if 0
		if(score <=100 && score>=90)
				puts("A");
		if(score <90 && score>=80)
				puts("B");
		if(score <80 && score>=70)
				puts("C");
		if(score <70 && score>=60)
				puts("D");
		if(score <60 && score>=0)
				puts("E");
		#endif
		if (score >90)
				puts("A");
			else if(score > 80)
					puts("B");
				else if (score >70)
						puts("C");
				else if(score >60)
						puts("D");
				else
					puts("E");
}
/*
 *润年 能被4整除但不能100整除，或者能被400整除
 * */
void leapyear(void){
		int year;
		scanf("%d",&year);

		if (year % 4==0 &&year %100 != 0  || year % 400 == 0)
				printf("%d year is leap year.\n",year);
		else
		printf("no leap year");

}
int main(){
		
	//	int a=9,b=10;
#if 0
		if (b++ < a)
				printf("1\n");
		else
				printf("0\n");
		printf("a=%d,b=%d\n",a,b);
#endif
	//	printf("%d\n",(++b<a,++a,b++ ));
	//	printf("%d\n",b);
	
	//score();
	leapyear();
		exit(0);
}
