#include <stdio.h>
#include <stdlib.h>

//共用一块内存空间，其大小为最大数据类型所占的空间大小
union test_un{
		int i;             //4
		float f;           //4
		double b;          //8
		char ch;  		   //1
};

int main(){
		
		union test_un a;
		union test_un *p=&a;
		union test_un arr[3];
		p->f=123.456;
		printf("%d\n",sizeof(a));
		printf("%f\n",a.f);
		exit(0);
}
