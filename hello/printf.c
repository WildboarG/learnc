#include <stdio.h>
#include <stdlib.h>
#define STRSIZE 11
/*
 *printf("%[修饰副]格式字符"，输出表项)
 
 */

int main(){
		char ch = 65;
		float f = 123.456789;
		char str[STRSIZE] = "helloworld";
  		printf("[%s:%d]before while().\n",__FUNCTION__,__LINE__);
  //		while(1);
		sleep(5);
		printf("[%s:%d]AFTERwhile().\n",__FUNCTION__,__LINE__);
		
		printf("16进制：ch= %#x\n",ch);
		printf("8进制：ch= %#o\n",ch);
		printf("str =%-10.5s[over]\n", str);
		printf("f = %.3f\n",f);
		printf("f = %4.5f\n",f);
		printf("ch = %5d\n",ch);
		printf("%c\n",ch);
		printf("hello world!\n");
		exit(0);
}
