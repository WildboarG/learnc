#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char *str="hello";
	printf("%d  %d\n",sizeof(str),strlen(str));
	//F strcpy(str,"world");
	str = "world"; //放弃指向hello 转而执行world
	puts(str);
	
	
#if 0
		char str[] = "hello";
		//F str = "world";
		strcpy(str, "world");
		puts(str);
#endif
#if 0
		char str[] = "I LOVE China!";
		char *p = str+7;
		puts(str);
		puts(p);

#endif

		exit(0);
}
