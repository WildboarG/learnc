#include <stdio.h>
#include <stdlib.h>

//函数的声明
//函数的声明使得函数可以放在主掉函数之后
static void print_hello(void); 

//主调函数
int main(){
		print_hello();
		
		exit(0);

}
//被调函数
static void print_hello(void){
		printf("hello wolrd!\n");
		return ;
}
