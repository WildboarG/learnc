#include <stdio.h>
#include <stdlib.h>
#define PI 3.14


static void ji(void){
		int x,y,z;
		for (x=0;x<20;x++){
				for(y=0;y<100/3;y++){
					z = 100 - x -y;
					if (z%3 == 0 && 5*x + y*3 + z/3 ==100)
						printf("x=%d y=%d z=%d\n",x,y,z);				
				
				}
		}
}
static void shuixianhua(void){
			int i;
			int a,b,c;
			for(i=100;i<1000;i++){
					a = i/100;
					b = i%100/10;
					c = i%10;
					if (i==a*a*a +b*b*b+c*c*c)
							printf("%d\n",i);

			}
}
//1000内的质数和
static void zhishu(void){
		int i,j,mark;
		for(i=2;i<1000;i++){
				mark =1;
				for (j=2;j<i/2;j++){
						if(i%j==0){
							mark = 0;
							break;
						}
				}
		if (mark)
						printf("%d is a prime\t",i);
				
		}
}
static void daoxushuchu(){
		int line = 6,chars= 6,i;
		char ch;
		for (i=0;i<line;i++){
				for(ch='A'+i;ch<'A'+chars;ch++){
					printf("%c",ch);
				}
		printf("\n");
		}
}
static void zuanshi(void){
		int i,k,j;
		for (i=1;i<=4;i++){
				for(j=1;j<=4-i;j++){
						printf(" ");
				}
				for(k=1;k <= 2*i-1;k++){
						printf("*");
				}
				printf("\n");
		}
		for(i=1;i<=3;i++){
				for(j=1;j<=i;j++){
						printf(" ");
				}
				for(k=1;k<=7-2*i;k++){
						printf("*");
				}
				printf("\n");
		}
		
}
static void qiuhe(){
		int number;
		int sum=0;
		printf("please enter the first intget(q to quit):");
		while(scanf("%d",&number) == 1){
				sum += number;
				printf("please enter the next(q to quit):");
		}
		printf("the number of sum is %d",sum);
}
static void mainji(){
	int r=1;
	float area = 0;
	for (r;;r++){
			area = PI *r *r;
			if(area>100)
					break;
			printf("area = %f\n",area);
	}
}
void main(){
		ji();
		shuixianhua();
		zhishu();
		printf("\n");
		daoxushuchu();
		zuanshi();
		printf("\n");
		//qiuhe();
		mainji();
		exit(0);
}
