#include <stdio.h>
#include <stdlib.h>
//
//a[i](value) =*(a+i) = *(p+i) = p[i]
//&a[i]: &a[i]=a+i=p+i=&p[i]
int main(){
#if 0 
	int a[]={5,4,3,4,6};
	int y;
	int *p = &a[1];

	y=(*--p)++;   //注意i++与++i的赋值顺序;
	printf("y=%d\n",y);
	printf("a[0]=%d\n",a[0]);
#endif
#if 0
	int *p = (int [4]){1,2,3,4};
	int  i;
	printf("%d\n",sizeof(p));
	printf("%d\n",sizeof(*p));
	printf("%d\n",sizeof(p)/sizeof(*p)); //不要试图用计算数组长度的方法来计算指针，因为指针是固定长度的，而数组的长度与设定的长度有关
	printf("%d\n",sizeof(p)%sizeof(*p));

	for(i=0;i<4;i++)
			printf("%p--->%d\n",&p[i],p[i]);
#endif
#if 0
	int a[3];
	int *p=a;
	int i;
	for (i=0;i<sizeof(a)/sizeof(*a);i++){
			printf("%p--->%d\n",&a[i],a[i]);
	}
	for(i=0;i<sizeof(a)/sizeof(*a);i++){
			scanf("%d",p++);
	}
	p =a;  //指针复位，不然指针就移走了
	for (i=0;i<sizeof(a)/sizeof(*a);i++,p++){
			printf("%p--->%d\n",p,*p);
	}
	printf("\n");
#endif

		int a[3] = {1,2,3};
		int i;
		int *p = a;
		
		//a++;   a是常量不能变化
		//p++;    // p是指针变量可以指向下一个位置
		//p++ ; ---> p=p+1;
		//p+1;  ---> p
		printf("%p---%p\n",a,a+i);
		printf("%p---%p\n",p,p+i);
		for (i=0;i<sizeof(a)/sizeof(a[0]);i++){
				printf("%p --> %d\n",a+i,a[i]);
				//printf("%p --> %d\n",p+i,a[i]);
				//printf("%p --> %d\n",p+i,*(p+i));
				
		}
		printf("\n");	
		exit(0);
}
