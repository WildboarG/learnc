#include <stdio.h>
#include <stdlib.h>



int main(){

		int a[2][3]={1,2,3,4,5,6};
		int i,j;
		//int *p = a;  //a是二维的，而指针p移动是一维内是在列内移动，若直接把a赋给p，a是在行内移动，不能在列内移动。
		//只有取*a 将a降级到列的范围内，二者才匹配，此时p的移动是a中列范围的移动
		int *p = *a;
		printf("%p--->%p\n",p,p+1);
		printf("\n");
		for(i=0;i<2;i++)
				for(j=0;j<3;j++,p++)  //循环移动时候，指针也需要移动
						printf("%p --> %d\n",p,*p);
				printf("\n");



		exit(0);
}
