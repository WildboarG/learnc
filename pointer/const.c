#include <stdio.h>
#include <stdlib.h>
/*
 *
 *
 *
 *const int a;
 *int const a;
 *
 *const int *p;
 *int const *p;
 *
 *int * const p;
 *
 *const int *const p;
 *
 * */
void pointer_const(){
		  //指针常量
          int i=1;
          int j =100;
          int * const p=&i;
          //通过指针改变变量的值与通过变量名改变一致
          *p = 10;
          //指针常量限定了指针不能移动，但不限制通过指针改变常量的值;
          //T i =10;
          //F p = &j;
          printf("%d\n",*p);

}
void const_pointer(){
		
		//常量指针
		//放心传参，不修改参数值
		int i=1;
		int j=100;
		const int *p = &i;
		printf("%d\n",*p);
		//常量指针 限制了不能通过指针来改变值，单依旧可以通过变量名字来改变变量值
		//T i=10;   
		//F *p =10;
		//常量指针 限制了不能通过指针来改变值，单不限制指针的指向，指针依旧可以移动
		p = &j;  
		printf("%d\n",*p);
}

void const_pointer_const(){
		int i=1;
		int j=100;
		const int *const p=&i;
		//常量指针常量值,不仅指针不能偏移，值也不能企图修改
		//F  p=&j;
		//F  *p=10;
		printf("%d\n",*p);
} 
int main(){
#if 0
		const float pi = 3.14;//const变量常量化 初始化必须存值 不然就是随机值
		//F pi = 3.1415926;
		float *p= &pi;
		*p = 3.141529;
		printf("%f\n",pi);
#endif
		//指针常量
		//pointer_const();
		//常量指针
		//const_pointer();
		//常量化指针也常量值
		const_pointer_const();
		exit(0);
}
