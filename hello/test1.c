#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define WEIGHT 3.0e-23
#define KQ 950

static void water(void){
	float num;
	float sum;
	printf("please input for num:");
	scanf("%d",&num);
	sum = num * KQ/ WEIGHT;
	printf("%e",sum);

}
static void area(void){
		float a,b,c;
		float s,area;
		printf("please input 3 num");
		scanf("%f%f%f",&a,&b,&c);
		if (a+b<=c || b+c<=a || c+a<=b){
			fprintf(stderr,"input error!\n");
			exit(0);	
		}
		printf("a=%f\tb=%f\tc=%f\n",a,b,c);
		s = 1.0/2 *(a+b+c);
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		printf("area=%f\n",area);
}
static void root(void){
		float a,b,c,p,q;
		float x1,x2,disc;
		printf("please input three num");
		scanf("%f%f%f",&a,&b,&c);
		if ((b*b-4*a*c) <= 0){
			fprintf(stderr,"ERROR INPUT!!!\n");
			exit(1);
		};
		disc = b*b - 4*a*c;
		p = -b/2*a;
		q = sqrt(disc)/2*a;
		x1 = p+q;
		x2 = p-q;

		printf("x1=%f\tx2=%f",x1,x2);


}
int main(){
		//water();
		//area();
		root();
		return 0;
}
